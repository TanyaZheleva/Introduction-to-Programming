#pragma once
#include <iostream>

int main()
{
	int size;
	std::cin >> size;
	int* arr = new int[size];
	for (int  i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	for ( int j = size-1; j >=0; j--)
	{
		std::cout << arr[j];
	}
	delete[] arr;
	return 0;
}