// taco.cpp : Defines the entry point for the application.
//

#include "taco.h"
#include "assembler.h"

TacoObj taco;

int main()
{
	getIngred();
	TacoFactory::makeTaco(taco);
	return 0;
}

void getIngred() {
	std::cout << "What type of shell?\n";
	std::cin >> taco.shell;

	std::cout << "What type of meat?\n";
	std::cin >> taco.meat;

	std::cout << "Now for the big questions (optional questions)\n\n";
	std::cout << "What kind of cheese would you like\n";
	std::cin >> taco.cheese;
	
	std::cout << "Want some sour cream on it too?\n";
	std::cin >> taco.sour_cream;
}