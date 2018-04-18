#pragma once

#include <SM_Vector.h>
#include <SM_Quaternion.h>

namespace e0 { class World; struct Entity; }

namespace e3
{

class SysTransform
{
public:
	static void SetPosition(e0::World& world, const e0::Entity& entity, const sm::vec3& pos);
	static void SetAngle(e0::World& world, const e0::Entity& entity, const sm::Quaternion& angle);
	static void SetScale(e0::World& world, const e0::Entity& entity, const sm::vec3& scale);

	static sm::vec3 GetPosition(const e0::World& world, const e0::Entity& entity);
	static sm::Quaternion GetAngle(const e0::World& world, const e0::Entity& entity);
	static sm::vec3 GetScale(const e0::World& world, const e0::Entity& entity);

}; // SysTransform

}

#include "entity3/SysTransform.inl"
