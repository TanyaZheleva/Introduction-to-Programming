#pragma once
#include <iostream>
int karatsuba(int x, int y)
{
	int b = 10;
	int px = x;
	int py = y;
	while (px != 0 && py != 0)//max val of b
	{
		px /= 10;
		py /= 10;
		b *= 10;
	}

	int x1 = x / b;
	int x0 = x - x1;
	int y1 = y / b;
	int y0 = y - y1;

	int z0 = x0 * y0;
	int z2 = x1 * y1;
	int z1 = (x0 - x1) * (y1 - y0) + z2 + z0;
	return z2 * b * b + z1 * b + z0;
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;
	std::cout << karatsuba(num1, num2);
	return 0;
}
