#pragma once
#include <iostream>

int* sort(int* arr, int size)
{
	int temp = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
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

int findSmallest(int* arr, int length)
{
	int res = 1;
	for (int i = 0; i < length && arr[i] <= res; i++)
		res = res + arr[i];

	return res;
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
	arr = sort(arr, size);

	std::cout << findSmallest(arr, size);
	delete[] arr;
	return 0;
}