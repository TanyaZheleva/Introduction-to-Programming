#pragma once
#include <iostream>

int* reverse(int* _arr, int _size)
{
	int* revArr = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		revArr[i] = _arr[_size - 1 - i];
	}
	return revArr;
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

	int* rArr = reverse(arr, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << rArr[i]<<" ";
	}

	delete[] rArr;
	delete[]arr;
	return 0;
}