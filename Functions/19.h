#pragma once
#include <iostream>

float length(float x, float y, float z)
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

int main()
{
	float x, y, z;
	std::cin >> x >> y >> z;
	std::cout << length(x, y, z);
	return 0;
}
