#pragma once
#include <iostream>

int sum(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int num;
	std::cin >> num;
	std::cout << sum(num);
	return 0;
}
