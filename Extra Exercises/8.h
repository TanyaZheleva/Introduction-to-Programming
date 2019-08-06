#pragma once
#include <iostream>
int length(int num)
{
	int length = 0;
	while (num != 0)
	{
		length++;
		num /= 10;
	}
	return length;
}

int nextPermutation(int num)
{
	int size = length(num);
	int* arr = new int[size];
	int divisor = 1;
	for (int i = 0; i < size; i++)
	{
		divisor = pow(10, size - 1 - i);
		arr[i] = num / divisor;
		num %= divisor;
	}

	int i;
	int temp;
	for (i = size - 1; i > 0; i--)
	{
		if (arr[i] > arr[i - 1])
		{
			temp = arr[i];
			arr[i] = arr[i -1];
			arr[i - 1] = temp;
			break;
		}
	}

	for (int p = size-1; p >i; p--)
	{
		for (int j = size-1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
	
	int multiply = 1;
	int permutation = 0;
	for (int i = 0; i < size; i++)
	{
		multiply = pow(10, size - 1 - i);
		permutation += arr[i] * multiply;
	}
	return permutation;
}

int main()
{
	int num;
	std::cin >> num;
	std::cout<<nextPermutation(num);
	return 0;
}