#pragma once
#include <iostream>

double Pow(double x, double y)
{
	double step = 1;

	for (double i = 0; i < abs(y); i++)
	{
		step*= x;
	}
	if (y < 0)
	{
		step = 1 / step;
	}
	return step;
}

int main()
{
	std::cout << Pow(2, -1);
	return 0;
}