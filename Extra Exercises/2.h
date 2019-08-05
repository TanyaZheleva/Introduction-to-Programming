#pragma once
#include<iostream>

void primes(int num)
{
	int* numbers = new int[num];
	for (int i = 0; i < num; i++)
	{
		numbers[i] = i + 1;
	}

	for (int i = 1; i < num; i++)
	{
		if (numbers[i] != 0)
		{
			for (int j = i + numbers[i]; j < num; j += numbers[i])
			{
				numbers[j] = 0;
			}
			std::cout << numbers[i] << '\n';
		}
	}
	delete[] numbers;
}

void generatePrimes()
{
	int size = 100;
	int index = 0;
	while (true)
	{
		int* arr = new int[size];
		for (int p = 0; p < size; p++)
		{
			arr[p] = p + 1;
		}

		for (int i = 1; i < size; i++)
		{
			if (arr[i] != 0)
			{
				for (int j = i + arr[i]; j < size; j += arr[i])
				{
					arr[j] = 0;
				}
			}
		}
		for (int i = size - 99 - index; i < size; i++)
		{
			if (arr[i] != 0)
			{
				std::cout << arr[i] << " ";
			}
		}
		size += 100;
		index++;
	}
}

int main()
{
	//int num;
	//std::cin >> num;
	//primes(num);
	generatePrimes();
	return 0;
}