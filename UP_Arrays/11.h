#pragma once
#include <iostream>

int mode(int* _arr, int _size)
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
	
	int curIndex = 0;
	int maxRepIndex = 0;
	int maxRep = 0;
	int curRep = 0;
	
		for (int j = 0; j < _size-1; j++)
		{
			if (_arr[j] = _arr[j + 1])
			{
				curRep++;
				curIndex = j;
			}
			else
			{
				if (maxRep < curRep)
				{
					maxRep = curRep;
					maxRepIndex = curIndex;
				}
				curIndex = 0;
				curRep = 0;
			}
		}
	
	return _arr[maxRepIndex];
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
	std::cout << mode(arr, size);

	return 0;
}