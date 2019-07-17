#pragma once
#include <iostream>

float median(int* _arr, int _size)
{
	int temp = _arr[0];
	for (int i = 0; i < _size-1; i++)
	{
		for (int j = 0; j < _size-i-1; j++)
		{
			if (_arr[j] > _arr[j + 1])
			{
				temp = _arr[j];
				_arr[j] = _arr[j + 1];
				_arr[j + 1] = temp;
			}
		}
	}

	if (_size % 2 != 0)
	{
		return _arr[(_size - 1) / 2];
	}
	else
	{
		return (_arr[_size / 2] + _arr[(_size / 2) - 1]) / 2;
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
	std::cout << median(arr, size);
	return 0;
}