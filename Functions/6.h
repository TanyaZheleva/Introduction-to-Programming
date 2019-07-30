#pragma once
#include <iostream>

float power(int a, int b)
{
	float aPowerB = 1.0f;
	for (int i = 0; i < abs(b); i++)
	{
		aPowerB *= a;
	}
	if (b < 0)
	{
		return 1 / aPowerB;
	}
	return aPowerB;
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;
	std::cout<<power(num1, num2);
	return 0;
}
