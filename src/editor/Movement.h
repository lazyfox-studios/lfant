
#pragma once
#include <lfant/stdafx.h>

// internal
#include <lfant/Component.h>
#include <lfant/Rigidbody.h>

// external

namespace lfant {
namespace editor {

class Movement : public Component
{
public:
	virtual void Serialize(Properties* prop);

	virtual void Init();
	virtual void Update();
	virtual void Deinit();

	void Move(vec3 velocity);

protected:
	float movementSpeed = 5.0f;
	float jumpHeight = 10.0f;
	bool usePhysics = false;

	Rigidbody* rigidbody = nullptr;

private:
};

}
}
