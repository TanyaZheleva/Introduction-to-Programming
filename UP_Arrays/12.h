#pragma once
#include <iostream>

void sort(int* _arr, int _size)
{
	int temp = _arr[0];
	for (int i = 0; i < _size - 1; i++)
	{
		for (int j = 0; j < _size - i - 1; j++)
		{
			if (_arr[j] > _arr[j + 1])
			{
				temp = _arr[j];
				_arr[j] = _arr[j + 1];
				_arr[j + 1] = temp;
			}
		}
	}
}

int find(int* _arr, int _size, int c)
{
	sort(_arr, _size);
	
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

int binarySearch(int* _arr,int start, int _size, int c)
{
	if (_size >= start)
	{
		int mid = start + (_size - start) / 2;
		if (c == _arr[mid])
		{
			return mid;
		}
		else if (c < _arr[mid])
		{
			return binarySearch(_arr, start, mid - 1, c);
		}
		else if (c > _arr[mid])
		{
			return binarySearch(_arr, mid + 1, _size, c);
		}
	}
	return -1;
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
	//std::cout << find(arr, size, num);
	sort(arr, size);
	std::cout << binarySearch(arr,0, size-1, num);
	return 0;
}