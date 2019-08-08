#pragma once
#include <iostream>

bool permutation(char* arr, int size)
{
	bool check = false;
	int count = 0;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				check = true;
				break;
			}
		}
		if (check == false)
		{
			count++;
		}
		if (count > 1)
		{
			return false;
		}
	}

	if (check == true && count <= 1)
	{
		return true;
	}
}


int main()
{
	int size;
	std::cin >> size;
	char* str = new char[size + 1];
	std::cin >> str;
	str[size] = '\0';
	std::cout << permutation(str, size);
	return 0;
}
