#pragma once

#include <iostream>

#include "taco.h"

namespace TacoFactory
{
	void makeTaco(TacoObj obj);

	struct TRObj
	{
		std::string sour;
		std::string cheese;
	};
}