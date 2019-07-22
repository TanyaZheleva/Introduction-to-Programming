#pragma once
#include <iostream>
bool minPrime(int one, int two, int three)
{
	int min = 0;
	if (one < two)
	{
		if (two < three)
		{
			min = one;
		}
		else if (one < three)
		{
			min = one;
		}
		else if (three < one)
		{
			min = three;
		}
	}
	else
	{
		if (two < three)
		{
			min = two;
		}
		if (three < two)
		{
			min = three;
		}
	}

	if (min <= 1)
	{
		return false;
	}
	for (int i = 2; i < min; i++)
	{
		if (min % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;
	std::cout << minPrime(num1, num2, num3);
	return 0;
}
