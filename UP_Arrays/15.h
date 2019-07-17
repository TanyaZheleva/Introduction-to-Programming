#pragma once
#include <iostream>

void allPossibleSubsets(int* _arr, int _size)
{
	int count = pow(2, _size);
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			if ((i & (1 << j)) > 0)
				std::cout << _arr[j] << " ";
		}
		std::cout << "yaa\n";
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
	allPossibleSubsets(arr,size);
	return 0;
}