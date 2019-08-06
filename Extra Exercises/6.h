#pragma once
#include <iostream>

void CollatzSequence(int* sequence,int num, int size)
{
	int* arr = new int[size];
	for (int i = 0; i < size-1; i++)
	{
		arr[i] = sequence[i];
	}
	if (num % 2 == 0)
	{
		arr[size - 1] = num / 2;
		num /= 2;
	}
	else
	{
		arr[size - 1] = 3 * num + 1;
		num = 3 * num + 1;
	}
	if (num != 1)
	{
		size++;

		CollatzSequence(arr,num, size);	
	}
	if (num == 1)
	{
		arr[size] = 1;
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
	}
}

int main()
{
	int num;
	std::cin >> num;
	int* arr = new int[1];
	CollatzSequence(arr,num,1);

	return 0;
}