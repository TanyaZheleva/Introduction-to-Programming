#pragma once
#include <iostream>

int* sort(int* arr, int size)
{
	int temp;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}

int* square(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] *= arr[i];
	}
	return arr;
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
	numbers = sort(square(numbers, size), size);
	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i]<<" ";
	}
	delete[] numbers;
	return 0;
}