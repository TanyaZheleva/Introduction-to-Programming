#pragma once
#include<iostream>

char* shift(char* arr, int* permutation,int size)
{
	char* shifted = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		shifted[i] = arr[permutation[i]];
	}
	shifted[size] = '\n';
	return shifted;
}

int main()
{
	int size;
	std::cin >> size;
	char* arr = new char[size+1];
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	int* permutation = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> permutation[i];
	}
	arr = shift(arr, permutation, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
	}
	return 0;
}
