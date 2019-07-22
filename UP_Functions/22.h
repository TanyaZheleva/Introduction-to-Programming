#pragma once
#include <iostream>

int fibbonachi(int num)
{
	int fib = 1;
	int previousFib = 1;
	int ppf = 1;
	for (int i = 1; i < num-1; i++)
	{
		previousFib = fib;
		fib += ppf;
		ppf = previousFib;
	}
	return fib;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << fibbonachi(n);
	return 0;
}
