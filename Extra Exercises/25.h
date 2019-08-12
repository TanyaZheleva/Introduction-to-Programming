#pragma once
#include <iostream>
bool compare(int* nums, int a, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (nums[i] == a)
		{
			return true;
		}
	}
	return false;
}

bool balanced(char* str, int size)
{
	int* used = new int[size];
	int index = 0;
	bool found = false;
	for (int i = 0; i < size; i++)
	{
		found = false;
		if (str[i] == '(')
		{
			for (int j = i + 1; j < size && found == false; j++)
			{
				if (str[j] == ')' && compare(used, j, index) == false)
				{
					used[index] = i;
					used[index + 1] = j;
					index += 2;
					found = true;
				}
			}
		}
		
		if (str[i] == '[')
		{
			for (int j = i + 1; j < size && found == false; j++)
			{
				if (str[j] == ']' && compare(used, j, index) == false)
				{
					used[index] = i;
					used[index + 1] = j;
					index += 2;
					found = true;
				}
			}
		}

		if (str[i] == '{')
		{
			for (int j = i + 1; j < size && found == false; j++)
			{
				if (str[j] == '}' && compare(used, j, index) == false)
				{
					used[index] = i;
					used[index + 1] = j;
					index += 2;
					found = true;
				}
			}
		}

	}
	bool check = false;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size&&check==false; j++)
		{
			if (i == used[j])
			{
				check = true;
			}
			if (j == size - 1 && check == false)
			{
				return false;
			}
		}
		check = false;
	}
	return true;

}

int main()
{
	int size;
	std::cin >> size;
	char* brackets = new char[size + 1];
	std::cin >> brackets;
	std::cout << balanced(brackets,size);

	delete[] brackets;
	return 0;
}