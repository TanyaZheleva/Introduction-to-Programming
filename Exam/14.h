#pragma once
#include <iostream>

int p = 0;
int len(long num)
{
	int i = 0;
	if (num == 0)
	{
		i++;
	}
	while (num != 0)
	{
		i++;
		num /= 10;
	}
	return i;
}

bool existInArr(int* arr, int num, int end)
{
	for (int i = 0; i < end; i++)
	{
		if (arr[i] == num)
		{
			return true;
		}
	}
	return false;
}

int* CheckNums(long num1, long num2)
{
	int* nums = new int[10];
	int length1 = len(num1);
	int length2 = len(num2);
	int temp1 = 0;
	int temp2 = num2;
	if (num1 < 0)
	{
		num1 *= -1;
	}
	if (num2 < 0)
	{
		num2 *= -1;
	}
	for (int i = 0; i < length1; i++)
	{
		temp1 = num1 % 10;
		num1 /= 10;
		for (int j = 0; j < length2; j++)
		{
			if (temp2 % 10 == temp1)
			{
				if (existInArr(nums, temp1, p) == false)
				{
					nums[p] = temp1;
					p++;
				}
			}
			temp2 /= 10;
		}
		temp2 = num2;
	}
	return nums;
}

int main()
{
	long num1;
	long num2;
	std::cin >> num1 >> num2;
	int* arr = CheckNums(num1, num2);
	for (int i = 0; i < p; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}