
#include <lfant/Shader.h>

// Internal
#include <lfant/Console.h>
#include <lfant/FileSystem.h>
#include <lfant/Game.h>
#include <lfant/Renderer.h>
#include <lfant/FileSystem.h>
#include <lfant/Texture.h>

// External
#include <GL/glew.h>
#include <boost/range/algorithm/remove_if.hpp>
#include <glm/glm.hpp>

using namespace std;

namespace lfant
{

deque<Shader*> Shader::shaders;
Shader* Shader::current;

void Shader::Destroy()
{
	Object::Destroy();
//	delete this;
}

void Shader::Load(Properties *prop)
{
	prop->Get("vertex", vertex);
	prop->Get("fragment", fragment);
	prop->Get("geometry", geometry);
	LoadFile(vertex, fragment, geometry);
}

void Shader::Save(Properties *prop) const
{
	prop->Set("vertex", vertex);
	prop->Set("fragment", fragment);
	prop->Set("geometry", geometry);
}

void Shader::LoadFile(string file)
{
	if(file == "")
	{
		return;
	}

	Log("Shader::LoadFile: Touch '"+file+"'.");
	string ext = Extension(file);
	if(ext == "vert")
	{
		vertex = file;
	}
	else if(ext == "frag")
	{
		fragment = file;
	}
	else if(ext == "geom")
	{
		geometry = file;
	}
	else if(ext == "comp")
	{
		compute = file;
	}
	else
	{
		Log("Shader file type unknown, not loading. '", file, "'.");
	}
}

void Shader::LoadFile(string vert, string frag, string geom, string comp)
{
	Log("Loading shader files");
	LoadFile(vert);
	LoadFile(frag);
	LoadFile(geom);
	LoadFile(comp);

	Compile();
}

void Shader::Compile()
{
	Log("Shader::Compile: Touch.");
	if(vertex == "" || fragment == "")
	{
		Log("Shader link failed: missing vertex or fragment stage.");
		return;
	}

	for(auto& sh : shaders)
	{
		if(vertex == sh->vertex && fragment == sh->fragment && geometry == sh->geometry && compute == sh->compute && sh->id != -1)
		{
			Log("Shader::LoadFile: Found previous shader that's compatible for '", vertex, "'.");
			id = sh->id;
			return;
		}
	}

	uint32 vert = -1;
	uint32 frag = -1;
	id = glCreateProgram();

	if(vertex != "")
	{
		Log("Compiling vertex");
		vert = Compile(GL_VERTEX_SHADER, vertex);
		Log("Attaching vertex");
		glAttachShader(id, vert);
	}
	if(fragment != "")
	{
		Log("Compiling fragment");
		frag = Compile(GL_FRAGMENT_SHADER, fragment);
		Log("Attaching fragment");
		glAttachShader(id, frag);
	}
#if !LFANT_GLES
	uint32 geom = -1;
	uint32 comp = -1;
	if(geometry != "")
	{
		geom = Compile(GL_GEOMETRY_SHADER, geometry);
		glAttachShader(id, geom);
	}
	if(compute != "")
	{
		comp = Compile(GL_COMPUTE_SHADER, compute);
		glAttachShader(id, comp);
	}
#endif

	glLinkProgram(id);
	CheckErrors();

	if(vert) glDeleteShader(vert);
	if(frag) glDeleteShader(frag);
#if !LFANT_GLES
	if(geom != -1) glDeleteShader(geom);
	if(comp != -1) glDeleteShader(comp);
#endif

	shaders.push_back(this);
	Unbind();
}

uint32 Shader::GetUniform(string name)
{
	return uniforms[name];
}

void Shader::AddUniform(string name)
{
	uniforms[name] = glGetUniformLocation(id, name.c_str());
//	Log("Adding uniform '"+name+"' as ", uniforms[name]);
}

void Shader::Bind()
{
	glUseProgram(id);
	Shader::current = this;
//	Log("Shader, binding ", id);
}

void Shader::Unbind()
{
	glUseProgram(0);
	Shader::current = nullptr;
//	Log("Shader, unbinding ", id);
}

Shader* Shader::GetCurrent()
{
	return Shader::current;
}

uint32 Shader::GetId()
{
	return id;
}

uint32 Shader::Compile(uint32 type, const string &path)
{
	Log("Shader::Compile() {");
	ifstream stream(game->fileSystem->GetGamePath(path).string());
	string line = "";
	string source = "";

	deque<string> str;
	Log("Reading the file");
	while(stream.good())
	{
		getline(stream, line);
		// extra parsing code?
		if(line[0] == '#')
		{
			str = Split(line, "\t <>\"");
			if(str[0] == "#include")
			{
				Log("including in shader '"+str[1]+"'.");
				ifstream stream2(game->fileSystem->GetGamePath(str[1]).string());
				string line = "";
				while(stream2.good())
				{
					getline(stream2, line);
					source += "\n"+line;
				}
				stream2.close();
				continue;
			}
		}
		source += "\n"+line;
	}
	stream.close();

	Log("glCreateShader");
	uint32 shader = glCreateShader(type);
	const char* csource = (source+"\0").c_str();
	Log("glShaderSource");
	glShaderSource(shader, 1, &csource, 0);
	Log("glCompileShader");
	glCompileShader(shader);

	int32 logLength = 0;
	int32 result = 0;
	Log("Getting shader output values");
	glGetShaderiv(shader, GL_COMPILE_STATUS, &result);
	glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &logLength);
	char error[logLength];
	glGetShaderInfoLog(shader, logLength, 0, &error[0]);
	if (logLength > 0)
	{
		Log(error);
	}

	Log("}");
	return shader;
}

void Shader::CheckErrors()
{
	int32 result;
	int32 logLength;
	glGetProgramiv(id, GL_LINK_STATUS, &result);
	glGetProgramiv(id, GL_INFO_LOG_LENGTH, &logLength);
	char ProgramErrorMessage[glm::max(logLength, int(1))];
	glGetProgramInfoLog(id, logLength, 0, &ProgramErrorMessage[0]);
	if (logLength > 0)
	{
		Log(ProgramErrorMessage);
	}
}

void Shader::SetUniform(string name, float val)
{
	glUniform1f(GetUniform(name), val);
}

void Shader::SetUniform(string name, int val)
{
	glUniform1i(GetUniform(name), val);
}

void Shader::SetUniform(string name, unsigned int val)
{
	glUniform1ui(GetUniform(name), val);
}

void Shader::SetUniform(string name, const vec2& val)
{
	glUniform2f(GetUniform(name), val.x, val.y);
}

void Shader::SetUniform(string name, const vec3& val)
{
	glUniform3f(GetUniform(name), val.x, val.y, val.z);
}

void Shader::SetUniform(string name, const vec4& val)
{
	glUniform4f(GetUniform(name), val.x, val.y, val.z, val.w);
}

void Shader::SetUniform(string name, const mat4& val)
{
	glUniformMatrix4fv(GetUniform(name), 1, GL_FALSE, &val[0][0]);
}

void Shader::SetUniform(string name, Texture* val)
{
	val->Bind();
	glUniform1i(GetUniform(name), val->GetIndex());
//	val->Unbind();
}

}
