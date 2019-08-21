#pragma once
#include <iostream>

int convToNum(char str)
{
	if (str == 'M')
	{
		return 1000;
	}
	if (str == 'D')
	{
		return 500;
	}if (str == 'C')
	{
		return 100;
	}if (str == 'L')
	{
		return 50;
	}if (str == 'X')
	{
		return 10;
	}
	if (str == 'V')
	{
		return 5;
	}
	if (str == 'I')
	{
		return 1;
	}
}

int convert(char* str, int length)
{
	int num = 0;
	int temp = 0;
	int temp2 = 0;
	bool check = false;
	for (int i = 0; i < length; i++)
	{		
		temp = convToNum(str[i]);
		if (i + 1 < length)
		{
			temp2 = convToNum(str[i + 1]);
		}

		if (i + 1 == length && check == true)
		{
			num += convToNum(str[i]);
		}

		if(i+1<length)
		{
			if (temp < temp2)
			{
				num += temp2 - temp;
				check = false;
			}
			if (temp >= temp2)
			{
				num += temp;
				check = true;
			}
		}

		temp = temp2 = 0;
	}
	return num;
}

int main()
{
	int size;
	std::cin >> size;
	char* roman = new char[size + 1];
	std::cin >> roman;
	roman[size] = '\0';
	std::cout << convert(roman, size);
	delete[] roman;
	return 0;
}