#pragma once
#include <iostream>
#include <math.h>

float distance(float x1, float y1, float x2, float y2)
{
	return std::sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
int main()
{
	float x1, x2, y1, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	std::cout << distance(x1, y1, x2, y2);
	return 0;
}
