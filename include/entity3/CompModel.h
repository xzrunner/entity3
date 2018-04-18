#pragma once

#include <entity0/Component.h>
#include <model/Model.h>

#include <memory>

namespace model { class Model; }

namespace e3
{

struct CompModel : public e0::Component
{
	std::shared_ptr<model::Model> model = nullptr;

}; // CompModel

}