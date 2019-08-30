#pragma once
#include <iostream>

bool numCheck(long num)
{
	int digit;
	int curDigit;
	int temp = num;
	int count = 1;
	while (num != 0)
	{
		digit = num % 10;
		num /= 10;
		temp = num;
		while (temp != 0)
		{
			curDigit = temp % 10;
			temp /= 10;
			if (curDigit == digit)
			{
				count++;
			}
			if (count >= 3)
			{
				return true;
			}
		}
		count = 1;
	}
	return false;
}

int main()
{
	std::cout << numCheck(0) << "\n";
	std::cout << numCheck(1) << "\n";
	std::cout << numCheck(-1) << "\n";
	std::cout << numCheck(11) << "\n";
	std::cout << numCheck(-11) << "\n";
	std::cout << numCheck(1234) << "\n";
	std::cout << numCheck(122555) << "\n";
	std::cout << numCheck(666) << "\n";
	std::cout << numCheck(420000) << "\n";
	return 0;
}