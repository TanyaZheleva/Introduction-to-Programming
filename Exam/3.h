#pragma once
#include <iostream>

struct lineSegment
{
	lineSegment(float _startX, float _startY, float _endX, float _endY) :
		startX(_startX), startY(_startY), endX(_endX), endY(_endY)
	{}
	float startX;
	float startY;
	float endX;
	float endY;
};

float common(lineSegment a, lineSegment b)
{
	if (a.startX == b.startX && a.endX == b.endX)
	{
		if (a.endY <= b.startY || b.endY <= a.startY)
		{
			std::cout << "The two segments don't overlap!\n";
			return -1;
		}
		if (a.startY < b.startY && a.endY > b.endY)
		{
			return abs(b.endY - b.startY);
		}
		if (b.startY < a.startY && b.endY > a.endY)
		{
			return abs(a.endY - a.startY);
		}
		if (b.startY < a.startY && b.endY < a.endY)
		{
			return abs(b.endY - a.startY);
		}
		if (a.startY < b.startY && a.endY < b.endY)
		{
			return abs(a.endY - b.startY);
		}
	}

	if (a.startY == b.startY && a.endY == b.endY)
	{
		if (a.endX <= b.startX || b.endX <= a.startX)
		{
			std::cout << "The two segments don't overlap!\n";
			return -1;
		}
		if (a.startX < b.startX && a.endX > b.endX)
		{
			return abs(b.endX - b.startX);
		}
		if (b.startX < a.startX && b.endX > a.endX)
		{
			return abs(a.endX - a.startX);
		}
		if (b.startX < a.startX && b.endX < a.endX)
		{
			return abs(b.endX - a.startX);
		}
		if (a.startX < b.startX && a.endX < b.endX)
		{
			return abs(a.endX - b.startX);
		}
	}

	std::cout << "Not paralel to Ox or Oy\n";
	return -1;
}

int main()
{
	lineSegment a(-6, 2, 2, 2);
	lineSegment b(-1, 2, 1, 2);
	std::cout << common(a, b);
	return 0;
}