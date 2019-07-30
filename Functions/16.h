#pragma once
#include <iostream>

float root(float a, float b)
{
	return -b / a;
}

int main()
{
	float a, b;
	std::cin >> a >> b;
	std::cout << root(a, b);
	return 0;
}
