#pragma once
#include <iostream>

bool divisible(int one, int two)
{
	if (one % two == 0)
	{
		return true;
	}
	return false;
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;
	std::cout << divisible(num1, num2);
	return 0;
}
