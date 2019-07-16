#pragma once
#include <iostream>

void print(int* _arr, int _size)
{
	for (int i = 0; i < _size; i++)
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

	print(arr, size);
	delete[]arr;
	return 0;
}