#pragma once
#include <iostream>
#include <iomanip>
int main()
{
	int num;
	std::cin >> num;
	int n = 1;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << std::setw(3) << n;
			n++;
		}
		std::cout << '\n';
	}
	return 0;
}