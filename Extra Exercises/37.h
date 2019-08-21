#pragma once
#include <iostream>
int len(int num)
{
	int length = 0;
	while (num != 0)
	{
		length++;
		num /= 10;
	}
	return length;
}
int findDivider(int num)
{
	int divider = 1;
	int length = len(num);
	for (size_t i = 1; i < length; i++)
	{
		divider *= 10;
	}
	return divider;
}
void sort(int* arr, int size)
{
	int temp;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void arrange(int* arr, int size)
{
	int divider = 1;
	int length = 1;
	int temp = 0;
	sort(arr, size);
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1-i; j++)
		{
			if (arr[j] / findDivider(arr[j]) < arr[j + 1] / findDivider(arr[j + 1]))
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int size;
	std::cin >> size;
	int* numbers = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> numbers[i];
	}
	arrange(numbers, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i]<<" ";
	}
	delete[] numbers;
	return 0;
}