#pragma once
#include <iostream>

//euclidean method
int gcd(int x,int y)
{
	if (y == 0)
	{
		return x;
	}
	else
	{
		return gcd(y, x-((x/y)*y));
	}
}

int main()
{
	int num1,num2;
	std::cin >> num1>>num2;
	std::cout << gcd(num1,num2);
	return 0;
}
