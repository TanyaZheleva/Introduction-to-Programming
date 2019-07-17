#pragma once
#include <iostream>

int* sort(int* _arr, int _size)
{
	int temp = _arr[0];
	for (int i = 0; i < _size - 1; i++)
	{
		for (int j = 0; j < _size - i - 1; j++)
		{
			if (_arr[i] > _arr[i + 1])
			{
				temp = _arr[i];
				_arr[i] = _arr[i + 1];
				_arr[i + 1] = temp;
			}
		}
	}
	return _arr;
}

int find(int* _arr, int _size, int c)
{
	int* arry = new int[_size];
	arry=sort(_arr, _size);
	int index = -1;
	for (int i = 0; i < _size; i++)
	{
		if (_arr[i] == c)
		{
			index = i;
		}
	}
	return index;
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
	int num;
	std::cin >> num;
	std::cout << find(arr, size, num);
	return 0;
}