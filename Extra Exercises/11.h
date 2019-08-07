#pragma once
#include <iostream>
#include <vector>

class pair
{
public:
	pair(int x, int y):x(x), y(y) {};
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

int remove(std::vector<pair> pairs)
{
	int count = 0;
	int* removed = new int[pairs.size()];
	bool added = false;

	for (size_t j = 0; j < pairs.size()-1; j++)
	{
		for (size_t i = j+1; i < pairs.size(); i++)
		{
			if ((pairs.at(j).getX() >= pairs.at(i).getX() && pairs.at(j).getX() >= pairs.at(i).getY())
			||(pairs.at(j).getY() <= pairs.at(i).getX() && pairs.at(j).getY() <= pairs.at(i).getY()))
			{}
			else
			{
				for (int p = 0; p < count; p++)
				{
					if (i == removed[p])
					{
						added = true;
						break;
					}
				}
				if (added==false)
				{
					removed[count] = i;
					count++;
				}
				added = false;
			}
		}
	}
	return count;
}

int main()
{
	pair one(1, 2);
	pair two(7, 8);
	pair three(7, 9);
	pair four(5, 8);
	pair five(9, 11);
	std::vector<pair> pairs;
	pairs.push_back(one);
	pairs.push_back(two);
	pairs.push_back(three);
	pairs.push_back(four);
	pairs.push_back(five);
	std::cout << remove(pairs);
	return 0;
}


