#pragma once

#include <ecsx/Component.h>
#include <model/Model.h>

#include <memory>

namespace model { class Model; }

namespace e3
{

struct CompModel : public ecsx::Component
{
	std::shared_ptr<model::Model> model = nullptr;

}; // CompModel

}