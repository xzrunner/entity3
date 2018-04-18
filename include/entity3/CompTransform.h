#pragma once

#include <entity0/Component.h>
#include <SM_Vector.h>
#include <SM_Quaternion.h>

namespace e3
{

struct CompPosition : public e0::Component
{
	CompPosition(const sm::vec3& pos) : pos(pos) {}

	sm::vec3 pos;

}; // CompPosition

struct CompAngle : public e0::Component
{
	CompAngle(const sm::Quaternion& angle) : angle(angle) {}

	sm::Quaternion angle;

}; // CompAngle

struct CompScale : public e0::Component
{
	CompScale(const sm::vec3& scale) : scale(scale) {}

	sm::vec3 scale;

}; // CompScale

}