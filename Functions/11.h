#pragma once
#include <iostream>

bool checkIfNumber(char symbol)
{
	if (symbol < 58 && symbol>47)
	{
		return true;
	}
	return false;
}

int main()
{
	char symbol;
	std::cin >> symbol;
	std::cout <<symbol<<" "<< checkIfNumber(symbol);
	return 0;
}
