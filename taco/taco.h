// taco.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

void getIngred();

struct TacoObj
{
	std::string shell;
	std::string meat;
	std::string cheese;
	std::string sour_cream;
};