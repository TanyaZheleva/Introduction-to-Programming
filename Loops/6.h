#pragma once
#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	int temp = num;
	int length = 0;
	while(temp!=0)
	{
		temp /= 10;
		length++;
	}
	temp = num;


	if (length > 3)
	{
		for (int i = 0; i < num / 1000; i++)
		{
			std::cout << "M";
		}
		temp %= 1000;
	}
	if (length > 2)
	{
		temp /= 100;

		if (temp < 5)
		{
			for (int i = 0; i < temp; i++)
			{
				std::cout << "C";
			}
		}

		if (temp > 4 && temp < 9)
		{
			std::cout << "D";
			for (int i = 0; i < temp - 5; i++)
			{
				std::cout << "C";
			}
		}

		if (temp == 9)
		{
			std::cout << "CM";
		}

		temp = num;
		temp %= 100;
	}

	if (length > 1)
	{
		temp /= 10;

		if (temp < 5)
		{
			for (int i = 0; i < temp; i++)
			{
				std::cout << "X";
			}
		}

		if (temp > 4 && temp < 9)
		{
			std::cout << "L";
			for (int i = 0; i < temp - 5; i++)
			{
				std::cout << "X";
			}
		}

		if (temp == 9)
		{
			std::cout << "XC";
		}

	}

		temp = num;
		temp %= 10;

		if (temp < 5)
		{
			for (int i = 0; i < temp; i++)
			{
				std::cout << "I";
			}
		}

		if (temp > 4 && temp < 9)
		{
			std::cout << "V";
			for (int i = 0; i < temp - 5; i++)
			{
				std::cout << "I";
			}
		}

		if (temp == 9)
		{
			std::cout << "IX";
		}

	
	return 0;
}