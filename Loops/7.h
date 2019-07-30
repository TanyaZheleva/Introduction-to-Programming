#pragma once
#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	bool isPrime = true;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			isPrime = false;
		}
	}
	if (isPrime == true)
	{
		std::cout << num << " is Prime";
	}
	else
	{
		std::cout << num << " is not prime";
	}
	return 0;
}