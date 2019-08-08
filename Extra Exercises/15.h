#pragma once
#include <iostream>

int smallest(int* arr, int size)
{
	int min = abs(arr[0]);
	for (int i = 1; i < size; i++)
	{
		if (min > abs(arr[i]))
		{
			min = abs(arr[i]);
		}
	}
	return min;
}

int gcd(int* arr, int size)
{
	int max = 1;
	int length = smallest(arr, size);
	bool failed = false;
	for (int i = 1; i <= length; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[j] % i != 0)
			{
				failed = true;
			}
		}
		if (failed == false)
		{
			if (max < i)
			{
				max = i;
			}
		}
		failed = false;
	}
	return max;
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

	std::cout << gcd(numbers, size);

	return 0;
}