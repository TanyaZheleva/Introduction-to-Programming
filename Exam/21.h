#pragma once
#include <iostream>

struct point
{
	point(double _x, double _y) :x(_x), y(_y)
	{}
	double x;
	double y;
};

bool triangle(point a, point b, point c)
{
	point ab(b.x - a.x, b.y - a.y);
	point ac(c.x - a.x, c.y - a.y);
	point bc(c.x - b.x, c.y - b.y);

	if (ab.x * ac.x + ab.y * ac.y == 0)
	{
		return true;
	}
	if (ab.x * bc.x + ab.y * bc.y == 0)
	{
		return true;
	}
	if (bc.x * ac.x + bc.y * ac.y == 0)
	{
		return true;
	}
	return false;
}

int main()
{
	point a(1, -2);
	point b(1, 3);
	point c(3, -2);
	std::cout << triangle(a, b, c);
	return 0;
}