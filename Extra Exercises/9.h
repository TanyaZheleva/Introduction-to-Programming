#pragma once
#include <iostream>

int length(int num)
{
	int count = 0;
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return count;
}

bool palindrome(int num)
{
	if (num != 0)
	{
		int divisor = pow(10, length(num) - 1);
		if (num / divisor == num % 10)
		{
			num %= divisor;
			num /= 10;
		return	palindrome(num);
		}
		else
		{
			return false;
		}
	}
	else
	{
		return true;
	}
}

int main()
{
	int num;
	std::cin >> num;
	std::cout << palindrome(num);

	return 0;
}
