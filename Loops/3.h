#pragma once
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int nRev = 0;
	int nlen = 0;
	int ntemp = n;
	while (ntemp != 0)
	{
		ntemp /= 10;
		nlen++;
	}
	for (int i = 0; i < nlen; i++)
	{
		nRev+=(n % 10)*pow(10,nlen-i-1);
		n /= 10;
	}
	std::cout << nRev;
	return 0;
}