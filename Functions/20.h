#pragma once
#include <iostream>
int factorial(int num)
{
	int factor = 1;
	for (int i = 1; i <= num; i++)
	{
		factor *= i;
	}
	return factor;
}

int main()
{
	int num;
	std::cin >> num;
	std::cout << factorial(num);
	return 0;
}
