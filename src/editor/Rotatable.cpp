#include "Rotatable.h"

// internal
#include <lfant/Game.h>
#include <lfant/Time.h>
#include <lfant/Scene.h>
#include <lfant/Console.h>
#include <lfant/Input.h>
#include <lfant/Transform.h>

// external

namespace lfant {
namespace editor {

IMPLEMENT_TYPE(Component, editor::Rotatable)

Rotatable::Rotatable()
{
}

void Rotatable::Update()
{
	Component::Update();

	float value = 0.0f;

	vec3 worldX = vec3(1,0,0) + (vec3(1,0,0) - GetOwner()->transform->GetRight());
	vec3 worldY = vec3(0,1,0) + (vec3(0,1,0) - GetOwner()->transform->GetUp());
	vec3 worldZ = vec3(0,0,1) + (vec3(0,0,1) - GetOwner()->transform->GetDirection());

	if((value = game->input->GetAxis("HRotation2")) != 0.0f)
	{
	//	GetOwner()->transform->Rotate({0,0,1}, value * game->time->deltaTime * 5.0f);
		GetOwner()->transform->Rotate(worldZ, value * game->time->deltaTime * 5.0f);
	}
	if((value = game->input->GetAxis("VRotation2")) != 0.0f)
	{
	//	GetOwner()->transform->Rotate({1,0,0}, -value * game->time->deltaTime * 5.0f);
		GetOwner()->transform->Rotate(worldX, -value * game->time->deltaTime * 5.0f);
	}
	if((value = game->input->GetAxis("ZRotation2")) != 0.0f)
	{
	//	GetOwner()->transform->Rotate({0,1,0}, -value * game->time->deltaTime * 5.0f);
		GetOwner()->transform->Rotate(worldY, -value * game->time->deltaTime * 5.0f);
	}

	if(game->input->GetButtonDown("ShowRot"))
	{
		Log("Object rotation: ", GetOwner()->transform->GetRotation());
	}
}

} // namespace editor
} // namespace lfant
