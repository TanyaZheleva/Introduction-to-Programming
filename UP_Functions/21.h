#pragma once
#include <iostream>

float nCk(int n, int k)
{
	float nf = 1.0f;
	for (int i = 1; i <= n; i++)
	{
		nf *= i;
	}
	float kf = 1.0f;
	for (int i = 1; i <= k; i++)
	{
		kf *= i;
	}
	float nkf = 1.0f;
	for (int i = 1; i <= n - k; i++)
	{
		nkf *= i;
	}
	return nf / (kf * nkf);
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	std::cout << nCk(n, k);
	return 0;
}
