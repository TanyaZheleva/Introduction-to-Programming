#pragma once
#include <iostream>

int len(char str[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int sizeOfEncoded(char str[])
{
	int i = 0;
	int count = 0;
	while (str[i] != 0)
	{
		if (str[i] >= NULL && str[i] <= '\t')
		{
			count++;
		}
		if (str[i] > '\t' && str[i] < 'd')
		{
			count += 2;
		}
		if (str[i] > 'c')
		{
			count += 3;
		}
		i++;
	}
	return count;
}

char returnChar(int digit)
{
	if (digit == 0)
	{
		return '0';
	}
	if (digit == 1)
	{
		return '1';
	}
	if (digit == 2)
	{
		return '2';
	}
	if (digit == 3)
	{
		return '3';
	}
	if (digit == 4)
	{
		return '4';
	}
	if (digit == 5)
	{
		return '5';
	}
	if (digit == 6)
	{
		return '6';
	}
	if (digit == 7)
	{
		return '7';
	}
	if (digit == 8)
	{
		return '8';
	}
	if (digit == 9)
	{
		return '9';
	}
}

char* encode(char str[])
{
	int countString = len(str);
	int size = sizeOfEncoded(str) + countString;
	char* encoded = new char[size];

	int temp;
	int i = 0;
	int j = 0;
	while (str[i] != '\0')
	{
		temp = str[i];
		if (temp < 10)
		{
			encoded[j] = returnChar(temp);
			j ++;
		}

		if (temp > 9 && temp < 100)
		{
			int temp2 = temp % 10;
			temp /= 10;
			encoded[j] = returnChar(temp2);
			encoded[j + 1] = returnChar(temp);
			j += 2;
		}

		if (temp > 99 && temp < 1000)
		{
			int divider = 100;
			for (int p = 0; p < 3; p++)
			{
				int temp1 = temp / divider;
				temp %= divider;
				encoded[j] = returnChar(temp1);
				divider /= 10;
				j++;
			}
		}
		if (i < countString-1)
		{
			encoded[j] = '_';
			j++;
		}
		i++;
	}
	encoded[size-1] = '\0';
	return encoded;
}

int main()
{
	char str[200];
	std::cin.get(str,200);
	char* arr=encode(str);
	int length = len(arr);
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i];
	}
	return 0;

}