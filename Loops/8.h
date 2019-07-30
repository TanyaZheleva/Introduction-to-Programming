#pragma once
#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	for (int j = 1; j <= num; j++)
	{
		bool isPrime = true;
		for (int i = 2; i < j; i++)
		{
			if (j % i == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			std::cout << j << '\n';
		}
	}
	return 0;
}