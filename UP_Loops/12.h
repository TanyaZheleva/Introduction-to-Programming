#pragma once
#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	if (num % 2 != 0)
	{

	int spaces = num;
	for (int i = 1; i <= num; i+=2)
	{
		for (int t = 0; t < (spaces-1)/2; t++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			std::cout << "*";
		}
		std::cout << '\n';
		spaces -= 2;
	}
	
	for (int t = 0; t < (num - 1) / 2; t++)
	{
		std::cout << " ";
	}
	std::cout << "*";
	}

	else
	{
		std::cout << "error";
	}
	return 0;
}