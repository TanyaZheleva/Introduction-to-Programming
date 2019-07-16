#pragma once
#include <iostream>

int main()
{
	int size;
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	for (int j = 0; j < size; j++)
	{
		if (arr[j] % 2 == 0)
		{
			std::cout << arr[j];
		}
	}
	delete[] arr;
	return 0;
}