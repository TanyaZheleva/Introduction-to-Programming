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

int smaller(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	return b;
}

int greater(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}

int difference(pair a, pair b)
{
	if (overlappingPairs(a, b))
	{
		int dif = smaller(a.getY(), b.getY()) - greater(a.getX(), b.getX());
		if (dif == 0)
		{
			dif = 1;
		}
		return dif;
	}
	return 0;
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

float areaOfOverlapping(rectangle a, rectangle b)
{
	if (overlappingRectangles(a, b))
	{
		return difference(a.getX(), b.getX()) * difference(a.getY(), b.getY());
	}
	else
	{
		return 0.0f;
	}
}

int main()
{
	pair oneX(1, 4);
	pair oneY(3, 3);
	pair twoX(0, 5);
	pair twoY(3, 4);

	rectangle one(oneX, oneY);
	rectangle two(twoX, twoY);
	std::cout<< "areaOfOverlapping: " << areaOfOverlapping(one, two) << '\n';
	return 0;
}
