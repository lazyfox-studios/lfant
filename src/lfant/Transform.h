/******************************************************************************
 *
 *	LFANT Source
 *	Copyright (C) 2012-2013 by LazyFox Studios
 *	Created: 2012-07-26 by Taylor Snead
 *
 *	Licensed under the Apache License, Version 2.0 (the "License");
 *	you may not use this file except in compliance with the License.
 *	You may obtain a copy of the License at
 *
 *	http://www.apache.org/licenses/LICENSE-2.0
 *
 *	Unless required by applicable law or agreed to in writing, software
 *	distributed under the License is distributed on an "AS IS" BASIS,
 *	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *	See the License for the specific language governing permissions and
 *	limitations under the License.
 *
 ******************************************************************************/
#pragma once

#include <lfant/stdafx.h>

// External

// Internal
#include <lfant/Component.h>
#include <lfant/Property.h>

namespace lfant
{
class Entity;

/** @addtogroup Game
 *	 @{
 */
/** @addtogroup Core
 *	 @{
 */

class Transform : public Component
{
public:
	Transform();
	virtual ~Transform()
	{
	}

	void Translate(vec3 pos);
	void Rotate(vec3 rot);
	void Scale(vec3 scl);

	// Properties

	vec3& GetPosition();
	void SetPosition(vec3 pos);

	quat GetRotationQuat();
	void SetRotationQuat(quat rot);

	vec3& GetRotation();
	void SetRotation(vec3 rot);

	vec3& GetScale();
	void SetScale(vec3 scl);

	vec3 GetWorldPosition();
	void SetWorldPosition(vec3 pos);

	quat GetWorldRotationQuat();
	void SetWorldRotationQuat(quat rot);

	vec3 GetWorldRotation();
	void SetWorldRotation(vec3 rot);

	vec3 GetWorldScale();
	void SetWorldScale(vec3 scl);

	mat4 GetMatrix();

	void SetDirection();

	const Entity* owner;

	Transform* parent;

	vec3 direction;
	vec3 right;
	vec3 up;

protected:
	vec3 position = vec3(0);
	vec3 rotation = vec3(0);
	quat rotationQuat;
	vec3 scale = vec3(1);

	//Property<Transform, boost::function_types::result_type<decltype(&Transform::GetPos)>::type, mpl::at_c<parameter_types<decltype(&Transform::SetPos)>, 1>::type> posir;

	/*
	PROP_RW(Transform, position, GetPosition, SetPosition)
	PROP_RW(Transform, rotation, GetRotation, SetRotation)
	PROP_RW(Transform, rotationQuat, GetRotationQuat, SetRotationQuat)
	PROP_RW(Transform, scale, GetScale, SetScale)

	PROP_RW(Transform, worldPosition, GetWorldPosition, SetWorldPosition)
	PROP_RW(Transform, worldRotation, GetWorldRotation, SetWorldRotation)
	PROP_RW(Transform, worldRotationQuat, GetWorldRotationQuat, SetWorldRotationQuat)
	PROP_RW(Transform, worldScale, GetWorldScale, SetWorldScale)

	PROP_RO(Transform, matrix, GetMatrix)
	*/
};

/** @} */
/** @} */
}