#include "assembler.h"

void TacoFactory::makeTaco(TacoObj taco)
{
	TacoFactory::TRObj tr;
	tr.cheese = taco.cheese;
	tr.sour = taco.sour_cream;

	std::cout << "Making taco in line...\n";

	if (taco.cheese == "NONE") {
		tr.cheese = "NONE";
	}
	if (taco.sour_cream == "NONE") {
		tr.sour = "NONE";
	}

	std::cout << "SHELL ========= " << taco.shell << " =========\n";
	std::cout << "MEAT ========= " << taco.meat << " =========\n";
	std::cout << "CHEESE ========= " << tr.cheese << " =========\n";
	std::cout << "SOUR CREAM ========= " << tr.sour << " =========\n";
	std::cin >> tr.cheese;
}