#pragma once

#include "entity3/CompTransform.h"

#include <entity0/World.h>

namespace e3
{

inline
sm::vec3 SysTransform::GetPosition(const e0::World& world, const e0::Entity& entity)
{
	return world.HasComponent<CompPosition>(entity) ?
		world.GetComponent<CompPosition>(entity).pos : sm::vec3(0, 0, 0);
}

inline
sm::Quaternion SysTransform::GetAngle(const e0::World& world, const e0::Entity& entity)
{
	return world.HasComponent<CompAngle>(entity) ?
		world.GetComponent<CompAngle>(entity).angle : sm::Quaternion(0, 0, 0);
}

inline
sm::vec3 SysTransform::GetScale(const e0::World& world, const e0::Entity& entity)
{
	return world.HasComponent<CompScale>(entity) ?
		world.GetComponent<CompScale>(entity).scale : sm::vec3(1, 1, 1);
}

}