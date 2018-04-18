#pragma once

#include <entity0/Component.h>
#include <model/Model.h>

#include <memory>

namespace e3
{

struct CompMesh : public e0::Component
{
	std::unique_ptr<model::Model> model = nullptr;

}; // CompMesh

}