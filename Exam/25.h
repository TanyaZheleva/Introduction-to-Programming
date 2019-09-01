#pragma once
#include <iostream>

void multipl(int m, int n)
{
	std::cout << "  __"<<m;
	for (int i = m+1; i <= n; i++)
	{
		std::cout << "___" << i;
	}
	std::cout << "___\n";
	for (int i = m; i <= n; i++)
	{
		std::cout << i << "|";
		for (int j = m; j <= n; j++)
		{
			std::cout << " " << i * j;
		}
		std::cout << "\n";
	}
}

int main()
{
	int m=0;
	int n=0;
	std::cin >> m >> n;
	while (m < 0 || m>64 || n < 0 || n>64)
	{
		std::cin >> m >> n;
	}


	multipl(m, n);

	return 0;
}