#pragma once
#include <iostream>
#include <iomanip>

void mult(int num)
{
	int space = 3;
	for (int i = 1; i <= num; i++)
	{
		std::cout << i <<std::setw(space)<< "*" << std::setw(space) << i << std::setw(space) << "=" << std::setw(space) << i * i << '\n';
	}
}

int main()
{
	int num;
	std::cin >> num;
	mult(num);
	return 0;
}