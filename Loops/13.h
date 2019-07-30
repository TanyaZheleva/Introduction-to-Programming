#pragma once
#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	int spaces = num;
	if (num % 2 != 0)
	{
		for (int i = 1; i < num; i += 2)
		{
			for (int t = 0; t < (spaces - 1) / 2; t++)
			{
				std::cout << " ";
			}
			for (int j = 0; j < i; j++)
			{
				std::cout << "*";
			}
			for (int p = 0; p <= num-i; p++)
			{
				std::cout << " ";
			}
			for (int j = 0; j < i; j++)
			{
				std::cout << "*";
			}
			spaces -= 2;
			std::cout << '\n';
		}

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < num; j++)
			{
				std::cout << "*";
			}
			std::cout << " ";
		}
		std::cout << '\n';


		int t = 1;
		for (int i = 1; i <= num; i++)
		{
			for (int p = 0; p < i; p++)
			{
				std::cout << " ";
			}
			for (int j = t; j < num * 2; j++)
			{
				std::cout << "*";
			}
			t += 2;
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "error";
	}
	return 0;
}