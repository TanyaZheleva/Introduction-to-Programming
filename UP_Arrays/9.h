#pragma once
#include <iostream>

void sort(int* _arr, int _size)
{
	int temp = _arr[0];
	for (int j = 0; j < _size - 1; j++)
	{
		for (int i = 0; i < _size - j - 1; i++)
		{
			if (_arr[i] >  _arr[i + 1])
			{
				temp = _arr[i];
				_arr[i] = _arr[i + 1];
				_arr[i + 1] = temp;
			}
		}
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

	sort(arr, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
	}
	return 0;
}