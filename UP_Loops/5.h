#pragma once

#include <iostream>

int main()
{
	int n;
	int k;

	std::cin >> n >> k;

	int nf = 1;
	for (int i = 1; i <= n; i++)
	{
		nf *= i;
	}
	int kf = 1;
	for (int i = 1; i <= k; i++)
	{
		kf *= i;
	}
	int nkf = 1;
	for (int i = 1; i <= n-k; i++)
	{
		nkf *= i;
	}
	int result = nf / (kf * nkf);
	std::cout << result;
	return 0;
}
