#pragma once
#include <iostream>

bool prime(int num)
{
	if (num <= 1)
	{
		return false;
	}
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}


int main()
{
	int num;
	std::cin >> num;
	std::cout << prime(num);
	return 0;
}
