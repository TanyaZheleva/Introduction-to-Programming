#pragma once
#include <iostream>
int k = 2;
double calc(double a, double b, double eps, long end)
{
	double product = 0;
	product = (b + b / a) / 5;
	k++;
	if (abs(product - b) >= eps)
	{
		if (abs(product - b) >= eps&&k <= end)
		{
			return calc(b, product, eps, end);
		}
		else
		{
			std::cout << "Error; k>end!\n";
			return -1;
		}
	}
	else
	{
		return product;
	}
}

int main()
{
	double a;
	double b;
	double eps;
	long end;
	std::cin >> a >> b >> end >> eps;
	std::cout << calc(a, b, eps, end);
	return 0;
}