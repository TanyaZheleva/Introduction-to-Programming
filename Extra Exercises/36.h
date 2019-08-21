#pragma once
#include <iostream>

bool distinct(int* pattern, int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (pattern[i] == pattern[j])
			{
				return false;
			}
		}
	}
	return true;
}

bool horizontal(int* pattern, int end, int difference)
{
	if (pattern[end] + difference == pattern[end + 1])
	{
		for (int j = 0; j < end; j++)
		{
			if (pattern[end] == pattern[j] - difference / 2)
			{
				return true;
			}
		}
		return false;
	}
}

bool horizontalR(int* pattern, int end, int diffenrence)
{
	if (pattern[end] - diffenrence == pattern[end + 1])
	{
		for (int j = 0; j < end; j++)
		{
			if (pattern[end] == pattern[j] + diffenrence / 2)
			{
				return true;
			}
		}
		return false;
	}
}

bool exist(int* pattern, int end, int num)
{
	for (int i = 0; i < end; i++)
	{
		if (pattern[i] == end)
		{
			return true;
		}
	}
	return false;
}

bool valid(int* pattern, int length)
{
	int difference = 0;
	if (distinct(pattern, length) == true)
	{
		for (int i = 0; i < length - 1; i++)
		{
			difference = abs(pattern[i + 1] - pattern[i]);
			if (difference == 2 || difference == 6)
			{
				if ((pattern[i] == 1 && pattern[i + 1] == 3 || pattern[i] == 4 && pattern[i + 1] == 6 || pattern[i] == 7 && pattern[i + 1] == 9) ||
					(pattern[i] == 1 && pattern[i + 1] == 7 || pattern[i] == 2 && pattern[i + 1] == 8 || pattern[i] == 3 && pattern[i + 1] == 9))
				{
					if (horizontal(pattern, i, difference) == false)
					{
						return false;
					}
				}
				if( (pattern[i] == 3 && pattern[i + 1] == 1 || pattern[i] == 6 && pattern[i + 1] == 4 || pattern[i] == 9 && pattern[i + 1] == 7)||
					(pattern[i] == 7 && pattern[i + 1] == 1 || pattern[i] == 8 && pattern[i + 1] == 2 || pattern[i] == 9 && pattern[i + 1] == 3))
				{
					if (horizontalR(pattern, i, difference) == false)
					{
						return false;
					}
				}
			}
			if (pattern[i] == 1 && pattern[i + 1] == 9 || pattern[i] == 9 && pattern[i + 1] == 1 ||
				pattern[i] == 3 && pattern[i + 1] == 7 || pattern[i] == 7 && pattern[i + 1] == 3)
			{
				if (exist(pattern, i, 5) == false)
				{
					return false;
				}
			}
		}
		return true;
	}
	else
	{
		return false;
	}


}


int main()
{
	int length = 0;
	while (length > 9 || length < 1)
	{
		std::cin >> length;
	}
	int* pattern = new int[length];
	for (int i = 0; i < length; i++)
	{
		std::cin >> pattern[i];
	}
	std::cout << valid(pattern, length);
	return 0;
}