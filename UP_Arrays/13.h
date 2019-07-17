#pragma once
#include <iostream>

void longest(int* _arr, int _size)
{
	int count = 0;
	int lastIndex = 0;
	int highestCount = 0;
	int hcLastIndex = 0;
	for (int i = 0; i < _size - 1; i++)
	{
		if (_arr[i] < _arr[i + 1])
		{
			lastIndex = i;
			count++;
		}
		else
		{
			if (highestCount < count)
			{
				highestCount = count;
				hcLastIndex = lastIndex;
			}
			count = 0;
			lastIndex = 0;
		}
	}

	int firstIndex = hcLastIndex - highestCount + 1;
	for (int i = firstIndex; i <= hcLastIndex+1; i++)
	{
		std::cout << _arr[i];
	}
}

int main()
{
	int size;
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	longest(arr, size);
	return 0;
}