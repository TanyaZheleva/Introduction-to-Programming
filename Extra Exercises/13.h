#pragma once
#include <iostream>
#include <vector>

class pair
{
public:
	pair(int x, int y) :x(x), y(y) {};
	int getX()const
	{
		return x;
	}
	int getY()const
	{
		return y;
	}
private:
	int x;
	int y;
};

class rectangle
{
public:
	rectangle(pair _X, pair _Y) :X(_X), Y(_Y) {};
	pair getX()const
	{
		return X;
	}

	pair getY()const
	{
		return Y;
	}
private:
	pair X;
	pair Y;
};

bool overlappingPairs(pair a, pair b)
{
	if ((a.getX() > b.getX() && a.getX() > b.getY())
		|| (a.getY() < b.getX() && a.getY() < b.getY()))
	{
		return false;
	}
	return true;
}

bool overlappingRectangles(rectangle a, rectangle b)
{
	if (overlappingPairs(a.getX(), b.getX()))
	{
		if (overlappingPairs(a.getY(), b.getY()))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool checkAllRectangles(std::vector<rectangle>rectangles)
{
	for (size_t i = 0; i < rectangles.size() - 1; i++)
	{
		for (size_t j = i + 1; j < rectangles.size(); j++)
		{
			if (overlappingRectangles(rectangles.at(i), rectangles.at(j)))
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	pair oneX(1, 4);
	pair oneY(3, 3);
	pair twoX(1, 3);
	pair twoY(1, 2);
	pair threeX(0, 5);
	pair threeY(3, 4);

	rectangle one(oneX, oneY);
	rectangle two(twoX, twoY);
	rectangle three(threeX, threeY);

	std::vector<rectangle> rectangles;
	rectangles.push_back(one);
	rectangles.push_back(two);
	rectangles.push_back(three);

	std::cout << checkAllRectangles(rectangles);
	
	return 0;
}