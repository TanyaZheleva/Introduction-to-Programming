#pragma once
#include <iostream>

int main()
{
	int size;
	std::cin >> size;
	bool check = false;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	if (arr[0] < arr[1])
	{
		for (int i = 1; i < size - 1; i++)
		{
			if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1] && arr[size - 1] > arr[size])
			{
				check = true;
			}

			else
			{
				check = false;
			}

		}
	}
	if (arr[0] > arr[1])
	{
		for (int i = 1; i < size - 1; i++)
		{
			if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1] && arr[size - 1] < arr[size])
			{
				check = true;
			}
			else
			{
				check = false;
			}
		}
	}


	if (check)
	{
		std::cout << true;
	}
	else
	{
		std::cout << false;
	}

	delete[]arr;
	return 0;
}