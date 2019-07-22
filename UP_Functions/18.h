#pragma once
#include <iostream>

bool line(float x1, float y1, float x2, float y2, float x3, float y3)
{
	if((x1*y2+x3*y1+x2*y3-x3*y2-x1*y3-x2*y1)==0)
	{
		return true;
	}
	return false;
}

int main()
{
	float x1, x2, y1, y2,x3,y3;
	std::cin >> x1 >> y1 >> x2 >> y2>>x3>>y3;
	std::cout << line(x1, y1, x2, y2,x3,y3);
	return 0;
}
