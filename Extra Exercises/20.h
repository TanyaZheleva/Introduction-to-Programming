#pragma once
#include <iostream>

int* smaller(int* arr, int size)
{
	int* countSmaller = new int[size];
	for (int i = 0; i < size; i++)
	{
		countSmaller[i] = 0;
	}
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				countSmaller[i]++;
			}
		}
	}
	return countSmaller;
}

int main()
{
	int size;
	std::cin >> size;
	int* numbers = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> numbers[i];
	}
	numbers = smaller(numbers, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i] << " ";
	}
	delete[]numbers;
	return 0;
}