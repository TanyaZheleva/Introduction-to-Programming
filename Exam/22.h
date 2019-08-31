#pragma once
#include <iostream>

void roots(char str[])
{
	int a = str[0]-'0';
	int b = str[6] - '0';
	int c = str[10] - '0';
	int d = b * b - 4 * a * c;

	if (d < 0)
	{
		std::cout << "No roots!\n";
	}
	if (d == 0)
	{
		std::cout << -b / (2 * a) << '\n';
	}
	if (d > 0)
	{
		int x1 = (-b + sqrt(d)) / (2 * a);
		int x2 = (-b - sqrt(d)) / (2 * a);
		std::cout << x1 << '\n' << x2 << "\n";
	}
}

int main()
{
	char equation[14];
	std::cin >> equation;
	roots(equation);
}