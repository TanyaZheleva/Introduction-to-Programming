#pragma once
#include <iostream>

double sqrt_a(double a, double eps)
{
	double previous = a;
	double current;
	bool moreThanEps = true;

	while (moreThanEps==true)
	{
		current = (previous + (a / previous)) / 2;

		if (abs(current - previous) >= eps)
		{
			moreThanEps = true;
			previous = current;
		}
		else
		{
			moreThanEps = false;
		}
	}

	return current;
}

int main()
{
	double a;
	double eps;
	std::cin >> a >> eps;
	std::cout << sqrt_a(a, eps);

	return 0;
}