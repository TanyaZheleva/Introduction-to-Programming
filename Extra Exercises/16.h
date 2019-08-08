#pragma once
#include <iostream>

char reocurring(char* str, int size)
{
	int indexLast = size;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (str[i] == str[j])
			{
				if (j < indexLast)
				{
					indexLast = j;
				}
				break;
			}
		}
	}
	if (indexLast == size)
	{
		return NULL;
	}
	return str[indexLast];
}

int main()
{
	int size;
	std::cin >> size;
	char* str = new char[size + 1];
	std::cin >> str;
	str[size] = '\0';
	std::cout << reocurring(str, size);
	return 0;
}