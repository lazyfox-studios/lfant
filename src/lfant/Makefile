# GNU Make project makefile autogenerated by Premake

ifndef config
  config=release_x64
endif

ifndef verbose
  SILENT = @
endif

.PHONY: clean prebuild prelink

ifeq ($(config),release_x64)
  TARGETDIR  = ../../bin64/linux
  TARGET     = $(TARGETDIR)/liblfant.so
  OBJDIR     = obj/x64
  DEFINES   += -D__STRICT_ANSI__
  INCLUDES  += -I.. -I../../external/glm -I../../external/assimp/include -I../../external/boost -I../../external/bullet/src -I../../external/glew/include -I../../external/glfw/include -I../../external/rocket/Include -I../../external/fmod/api/inc -I../../external/angelscript/include -I../../external/angelscript/add_on -I../../external/devil/include
  ALL_CPPFLAGS += $(CPPFLAGS) -MMD -MP $(DEFINES) $(INCLUDES)
  ALL_CFLAGS   += $(CFLAGS) $(ALL_CPPFLAGS) $(ARCH) -m64 -fPIC -std=gnu++11 -O3 -Wall -Wno-invalid-offsetof -Wno-overloaded-virtual
  ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CFLAGS)
  ALL_RESFLAGS += $(RESFLAGS) $(DEFINES) $(INCLUDES)
  ALL_LDFLAGS  += $(LDFLAGS) -L../../bin64/linux -s -shared -m64 -L/usr/lib64 -Wl,-rpath,$ORIGIN -Wl,-z,origin -Wl,--no-undefined
  LIBS      += ../../bin64/linux/libangelscript.a -lassimp -lglew -lglfw ../../bin64/linux/libboost.a -lfmod -lbullet -lrocket -lpng -lz -lrt -lpthread
  LDDEPS    += ../../bin64/linux/libangelscript.a ../../bin64/linux/libassimp.so ../../bin64/linux/libglew.so ../../bin64/linux/libglfw.so ../../bin64/linux/libboost.a
  LINKCMD    = $(CXX) -o $(TARGET) $(OBJECTS) $(RESOURCES) $(ARCH) $(LIBS) $(ALL_LDFLAGS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
  endef

all: $(TARGETDIR) $(OBJDIR) prebuild prelink $(TARGET)
	@:
endif

ifeq ($(config),release_x32)
  TARGETDIR  = ../../bin32/linux
  TARGET     = $(TARGETDIR)/liblfant.so
  OBJDIR     = obj/x32
  DEFINES   += -D__STRICT_ANSI__
  INCLUDES  += -I.. -I../../external/glm -I../../external/assimp/include -I../../external/boost -I../../external/bullet/src -I../../external/glew/include -I../../external/glfw/include -I../../external/rocket/Include -I../../external/fmod/api/inc -I../../external/angelscript/include -I../../external/angelscript/add_on -I../../external/devil/include
  ALL_CPPFLAGS += $(CPPFLAGS) -MMD -MP $(DEFINES) $(INCLUDES)
  ALL_CFLAGS   += $(CFLAGS) $(ALL_CPPFLAGS) $(ARCH) -m32 -fPIC -std=gnu++11 -O3 -Wall -Wno-invalid-offsetof -Wno-overloaded-virtual
  ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CFLAGS)
  ALL_RESFLAGS += $(RESFLAGS) $(DEFINES) $(INCLUDES)
  ALL_LDFLAGS  += $(LDFLAGS) -L../../bin32/linux -s -shared -m32 -L/usr/lib32 -Wl,-rpath,$ORIGIN -Wl,-z,origin -Wl,--no-undefined
  LIBS      += ../../bin32/linux/libangelscript.a -lassimp -lglew -lglfw ../../bin32/linux/libboost.a -lfmod -lbullet -lrocket -lpng -lz -lrt -lpthread
  LDDEPS    += ../../bin32/linux/libangelscript.a ../../bin32/linux/libassimp.so ../../bin32/linux/libglew.so ../../bin32/linux/libglfw.so ../../bin32/linux/libboost.a
  LINKCMD    = $(CXX) -o $(TARGET) $(OBJECTS) $(RESOURCES) $(ARCH) $(LIBS) $(ALL_LDFLAGS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
  endef

all: $(TARGETDIR) $(OBJDIR) prebuild prelink $(TARGET)
	@:
endif

OBJECTS := \
	$(OBJDIR)/Audio.o \
	$(OBJDIR)/AudioListener.o \
	$(OBJDIR)/AudioSource.o \
	$(OBJDIR)/BoxCollider.o \
	$(OBJDIR)/Camera.o \
	$(OBJDIR)/ChatClient.o \
	$(OBJDIR)/ChatServer.o \
	$(OBJDIR)/Collider.o \
	$(OBJDIR)/Component.o \
	$(OBJDIR)/Console.o \
	$(OBJDIR)/Entity.o \
	$(OBJDIR)/FileSystem.o \
	$(OBJDIR)/Game.o \
	$(OBJDIR)/Input.o \
	$(OBJDIR)/Joint.o \
	$(OBJDIR)/Light.o \
	$(OBJDIR)/Material.o \
	$(OBJDIR)/Mesh.o \
	$(OBJDIR)/MeshLoader.o \
	$(OBJDIR)/Network.o \
	$(OBJDIR)/Object.o \
	$(OBJDIR)/Particle.o \
	$(OBJDIR)/ParticleSystem.o \
	$(OBJDIR)/Physics.o \
	$(OBJDIR)/Properties.o \
	$(OBJDIR)/Random.o \
	$(OBJDIR)/Renderable.o \
	$(OBJDIR)/Renderer.o \
	$(OBJDIR)/Rigidbody.o \
	$(OBJDIR)/Scene.o \
	$(OBJDIR)/ScriptSystem.o \
	$(OBJDIR)/Settings.o \
	$(OBJDIR)/Shader.o \
	$(OBJDIR)/Sprite.o \
	$(OBJDIR)/Subsystem.o \
	$(OBJDIR)/SystemInfo.o \
	$(OBJDIR)/Texture.o \
	$(OBJDIR)/Thread.o \
	$(OBJDIR)/Time.o \
	$(OBJDIR)/Transform.o \
	$(OBJDIR)/TypeInfo.o \
	$(OBJDIR)/UserInterface.o \
	$(OBJDIR)/FileSystem1.o \
	$(OBJDIR)/Renderer1.o \
	$(OBJDIR)/System.o \
	$(OBJDIR)/lodepng.o \
	$(OBJDIR)/Client.o \
	$(OBJDIR)/Connection.o \
	$(OBJDIR)/PeerClient.o \
	$(OBJDIR)/Server.o \
	$(OBJDIR)/stdafx.o \
	$(OBJDIR)/String.o \
	$(OBJDIR)/lexical_cast.o \

RESOURCES := \

SHELLTYPE := msdos
ifeq (,$(ComSpec)$(COMSPEC))
  SHELLTYPE := posix
endif
ifeq (/bin,$(findstring /bin,$(SHELL)))
  SHELLTYPE := posix
endif

$(TARGET): $(GCH) $(OBJECTS) $(LDDEPS) $(RESOURCES)
	@echo Linking lfant
	$(SILENT) $(LINKCMD)
	$(POSTBUILDCMDS)

$(TARGETDIR):
	@echo Creating $(TARGETDIR)
ifeq (posix,$(SHELLTYPE))
	$(SILENT) mkdir -p $(TARGETDIR)
else
	$(SILENT) mkdir $(subst /,\\,$(TARGETDIR))
endif

$(OBJDIR):
	@echo Creating $(OBJDIR)
ifeq (posix,$(SHELLTYPE))
	$(SILENT) mkdir -p $(OBJDIR)
else
	$(SILENT) mkdir $(subst /,\\,$(OBJDIR))
endif

clean:
	@echo Cleaning lfant
ifeq (posix,$(SHELLTYPE))
	$(SILENT) rm -f  $(TARGET)
	$(SILENT) rm -rf $(OBJDIR)
else
	$(SILENT) if exist $(subst /,\\,$(TARGET)) del $(subst /,\\,$(TARGET))
	$(SILENT) if exist $(subst /,\\,$(OBJDIR)) rmdir /s /q $(subst /,\\,$(OBJDIR))
endif

prebuild:
	$(PREBUILDCMDS)

prelink:
	$(PRELINKCMDS)

ifneq (,$(PCH))
$(GCH): $(PCH)
	@echo $(notdir $<)
ifeq (posix,$(SHELLTYPE))
	-$(SILENT) cp $< $(OBJDIR)
else
	$(SILENT) xcopy /D /Y /Q "$(subst /,\,$<)" "$(subst /,\,$(OBJDIR))" 1>nul
endif
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.gch=%.d) -c "$<"
endif

$(OBJDIR)/Audio.o: Audio.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/AudioListener.o: AudioListener.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/AudioSource.o: AudioSource.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/BoxCollider.o: BoxCollider.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Camera.o: Camera.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/ChatClient.o: ChatClient.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/ChatServer.o: ChatServer.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Collider.o: Collider.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Component.o: Component.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Console.o: Console.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Entity.o: Entity.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/FileSystem.o: FileSystem.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Game.o: Game.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Input.o: Input.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Joint.o: Joint.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Light.o: Light.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Material.o: Material.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Mesh.o: Mesh.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/MeshLoader.o: MeshLoader.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Network.o: Network.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Object.o: Object.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Particle.o: Particle.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/ParticleSystem.o: ParticleSystem.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Physics.o: Physics.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Properties.o: Properties.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Random.o: Random.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Renderable.o: Renderable.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Renderer.o: Renderer.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Rigidbody.o: Rigidbody.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Scene.o: Scene.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/ScriptSystem.o: ScriptSystem.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Settings.o: Settings.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Shader.o: Shader.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Sprite.o: Sprite.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Subsystem.o: Subsystem.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/SystemInfo.o: SystemInfo.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Texture.o: Texture.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Thread.o: Thread.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Time.o: Time.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Transform.o: Transform.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/TypeInfo.o: TypeInfo.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/UserInterface.o: UserInterface.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/FileSystem1.o: gui/FileSystem.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Renderer1.o: gui/Renderer.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/System.o: gui/System.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/lodepng.o: lodepng.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Client.o: network/Client.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Connection.o: network/Connection.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/PeerClient.o: network/PeerClient.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/Server.o: network/Server.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/stdafx.o: stdafx.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/String.o: util/String.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"
$(OBJDIR)/lexical_cast.o: util/lexical_cast.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) -o "$@" -MF $(@:%.o=%.d) -c "$<"

-include $(OBJECTS:%.o=%.d)
ifneq (,$(PCH))
  -include $(OBJDIR)/$(notdir $(PCH)).d
endif
