#pragma once
#include <iostream>

int convertNumber(long num)
{
	int sum = 0;
	if (num < 0)
	{
		num *= -1;
	}

	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main()
{
	long num;
	std::cin >> num;
	std::cout << convertNumber(num);
	return 0;
}