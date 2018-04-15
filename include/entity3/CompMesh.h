#pragma once

#include <ecsx/Component.h>
#include <model/Model.h>

#include <memory>

namespace e3
{

struct CompMesh : public ecsx::Component
{
	std::unique_ptr<model::Model> model = nullptr;

}; // CompMesh

}