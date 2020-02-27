#include <iostream>
#include <stdlib.h>
#include <windows.h>

void makeMath(float input1, float input2)
{

	float addition{ input1 + input2 };
	float substraction{ input1 - input2 };
	float x{ input1 * input2 };
	float divide{ input1 / input2 };
	
	using namespace std;
	
	cout << "calculating...\n";
	Sleep(3000);
	cout << "This loading isnt necessary i just find it cool...\n";
	cout << "\n";
	Sleep(3000);
	cout << "Result addition: "     << addition     << "\n";
	cout << "Result substraction: " << substraction << "\n";
	cout << "Result *: "            << x            << "\n";
	cout << "Result divide: "       << divide       << "\n";
	cout << "\n";
	cout << "[THICCPOTATO CALCULATOR]" << "\n";
}