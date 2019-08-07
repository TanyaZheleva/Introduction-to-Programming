#pragma once
#include <iostream>

int distinct(int* arr, int size)
{
	int count = 1;
	int* lengths = new int[size-1];
	int p = 0;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				count++;
			}
			if (arr[i] <= arr[j]||j==size-1)
			{
				lengths[p] = count;
				count = 1;
				p++;
				break;
			}
		}
	}

	int max = 1;
	for (int q = 0; q < size-1; q++)
	{
		if (max < lengths[q])
		{
			max = lengths[q];
		}
	}
	return max;
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
	std::cout << distinct(arr, size);
	return 0;
}