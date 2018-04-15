#pragma once

#include <SM_Vector.h>
#include <SM_Quaternion.h>

namespace ecsx { class World; struct Entity; }

namespace e3
{

class SysTransform
{
public:
	static void SetPosition(ecsx::World& world, const ecsx::Entity& entity, const sm::vec3& pos);
	static void SetAngle(ecsx::World& world, const ecsx::Entity& entity, const sm::Quaternion& angle);
	static void SetScale(ecsx::World& world, const ecsx::Entity& entity, const sm::vec3& scale);

	static sm::vec3 GetPosition(const ecsx::World& world, const ecsx::Entity& entity);
	static sm::Quaternion GetAngle(const ecsx::World& world, const ecsx::Entity& entity);
	static sm::vec3 GetScale(const ecsx::World& world, const ecsx::Entity& entity);

}; // SysTransform

}

#include "entity3/SysTransform.inl"
