#pragma once
#include <iostream>

int len(long num)
{
	int i = 0;
	if (num == 0)
	{
		i++;
	}

	while (num != 0)
	{
		i++;
		num /= 10;
	}
	return i;
}

int DigitPos(long num, int k)
{
	int length = len(num);
	if (k > 0 && k <= length)
	{
		if (num < 0)
		{
			num = abs(num);
		}
		int divisor = pow(10, length - k);
		num /= divisor;
		num %= 10;
		return num;
	}
	return -1;
}

int main()
{
	long num;
	int k;
	std::cin >> num >> k;
	std::cout << DigitPos(num, k);
	return 0;
}