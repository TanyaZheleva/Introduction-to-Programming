#pragma once
#include <iostream>

bool checkIfLetter(char symbol)
{
	if (symbol < 88 && symbol>64)
	{
		return true;
	}
	else if (symbol < 120 && symbol>96)
	{
		return true;
	}
	return false;
}

int main()
{
	char symbol;
	std::cin >> symbol;
	std::cout  << checkIfLetter(symbol);
	return 0;
}
#pragma once
