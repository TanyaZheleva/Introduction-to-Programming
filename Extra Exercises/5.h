#pragma once
#include <iostream>

char findLetter(int num)
{
	return 'A' + num - 1;
}

void findIdNumber(int number)
{
	int first;
	int second;
	first = number / 26;
	second = number - first * 26;
	if (first > 0 && first <= 26)
	{
		std::cout << findLetter(first);
		std::cout << findLetter(second);
	}
	else if(first>26)
	{
		findIdNumber(first);
		std::cout << findLetter(second);
	}
	else if (first == 0)
	{
		std::cout << findLetter(second);
	}
}
int main()
{
	int number;
	std::cin >> number;
	findIdNumber(number);
	return 0;
}