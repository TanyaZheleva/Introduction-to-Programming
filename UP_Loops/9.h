#pragma once
#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	for (int i = 2; i < num; i++)
	{
		while (num % i == 0)
		{
			std::cout << i << '\n';
			num /= i;
		}
	}
	return 0;
}