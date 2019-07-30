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
	float avg = 0.0f;
	
	for (int j = 0; j < size; j++)
	{
		avg += arr[j];
	}
	avg /= size;
	for (int p = 0; p < size; p++)
	{
		if (arr[p] < avg)
		{
			std::cout << arr[p];
		}
	}
	delete[] arr;
	return 0;
}