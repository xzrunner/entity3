#include "entity3/SysTransform.h"

namespace e3
{

void SysTransform::SetPosition(ecsx::World& world, const ecsx::Entity& entity, const sm::vec3& pos)
{
	if (world.HasComponent<CompPosition>(entity)) {
		auto& cpos = world.GetComponent<CompPosition>(entity);
		cpos.pos = pos;
	} else {
		world.AddComponent<CompPosition>(entity, pos);
	}
}

void SysTransform::SetAngle(ecsx::World& world, const ecsx::Entity& entity, const sm::Quaternion& angle)
{
	if (world.HasComponent<CompAngle>(entity)) {
		auto& cangle = world.GetComponent<CompAngle>(entity);
		cangle.angle = angle;
	} else {
		world.AddComponent<CompAngle>(entity, angle);
	}
}

void SysTransform::SetScale(ecsx::World& world, const ecsx::Entity& entity, const sm::vec3& scale)
{
	if (world.HasComponent<CompScale>(entity)) {
		auto& coffset = world.GetComponent<CompScale>(entity);
		coffset.scale = scale;
	} else {
		world.AddComponent<CompScale>(entity, scale);
	}
}

}