#pragma once
#include<iostream>

int* rotate(int* arr, int size, int k)
{
	int temp;
	for (int i = 0; i < k; i++)
	{
		for (int j = size-1; j>0; j--)
		{
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
		}
	}
	return arr;
}

int main()
{
	int size;
	std::cout << "Enter size";
	std::cin >> size;
	int moveBy;
	std::cout << "Enter rotation";
	std::cin >> moveBy;
	while (moveBy >= size)
	{
		std::cout << "Enter rotation";
		std::cin >> moveBy;
	}
	int* arr = new int[size];
	std::cout << "Enter array";

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	arr = rotate(arr,size,moveBy);

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}