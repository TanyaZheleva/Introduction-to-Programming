#pragma once
#include <iostream>

unsigned int log2n(int n)
{
	if (n > 1)
	{
		return 1 + log2n(n / 2);
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << log2n(n);
	return 0;
}