#include <iostream>
#include "CalculatorEssentials(ThiccPotato).h"
#include <limits>

int main()
{
	
	float input1{ getUserInput() };
	float input2{ getUserInput() };
	makeMath(input1, input2);

	std::cout << "Press [ENTER] to close";

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}

