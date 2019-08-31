#pragma once
#include <iostream>

	int indexRepeated = 0;
int len(long num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		int i = 0;
		while (num != 0)
		{
			i++;
			num /= 10;
		}
		return i;
	}
}

int* sort(int* arr, int length)
{
	for (size_t i = 0; i < length - 1; i++)
	{
		for (size_t j = 0; j < length - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}

int maxPrevRepetitions(int* arr, int length)
{
	int count = 1;
	int digit;
	int index = 0;
	int max = 0;
	for (int i = 1; i < length; i++)
	{
		digit = arr[index];
		if (arr[i] == digit)
		{
			count++;
		}
		else
		{
			if (count > max)
			{
				max = count;
			}
			count = 1;
			index = i;
		}
	}
	if (count > max)
	{
		max = count;
	}
	return max;
}

int* common(long num)
{
	if (num < 0)
	{
		num *= -1;
	}

	int length = len(num);
	int* digits = new int[length];

	int* repeated = new int[10];

	for (int i = 0; i < length; i++)
	{
		digits[i] = num % 10;
		num /= 10;
	}
	digits = sort(digits, length);

	int index = 0;
	int current;
	int count = 1;
	int max = maxPrevRepetitions(digits, length);

	for (int i = 1; i < length; i++)
	{
		current = digits[index];
		if (current == digits[i])
		{
			count++;
		}
		else
		{
			if (count >= max)
			{
				repeated[indexRepeated] = current;
				indexRepeated++;
			}
			count = 1;
			index = i;
		}
		if (i == length - 1)
		{
			if (count >= max && digits[i] != repeated[indexRepeated - 1])
			{
				repeated[indexRepeated] = digits[i];
				indexRepeated++;
			}
		}
		
	}
	return repeated;
}

int main()
{
	long num;
	std::cin >> num;
	int*arr=common(num);
	for (int i = 0; i < indexRepeated; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}