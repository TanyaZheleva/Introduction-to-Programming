#pragma once
#include<iostream>
#include <string.h>

int strCmp(std::string str1, std::string str2)
{
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] < str2[i])
		{
			return -1;
		}
		if (str1[i] > str2[i])
		{
			return 1;
		}
		i++;
		while (str1[i] == str2[i])
		{
			i++;
			if (str1[i] == '\0')
			{
				if (str2[i] == '\0')
				{
					return 0;
				}
				return -1;
			}
			if (str2[i] == '\0')
			{
				return 1;
			}
		}
	}
	return -2;
}

void sortAlphabetically(std::string* str, int size)
{
	std::string temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (strCmp(str[j], str[j + 1]) > 0)
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
		}
	}
}

bool isAPrefix(std::string str, std::string query)
{
	int length = query.size();
	for (int i = 0; i < length; i++)
	{
		if(str[i]!=query[i])
		{
			return false;
		}
	}
	return true;
}

void autocomplete(std::string* str,int size, std::string query)
{
	sortAlphabetically(str, size);
	int i = 0;
	bool found = false;
	while (found==false)
	{
		while (isAPrefix(str[i], query))
		{
			std::cout << str[i] << '\n';
			i++;
			found = true;
		}
		i++;
	}
}

int main()
{
	int size;
	std::cin >> size;
	std::string* dictionary = new std::string[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> dictionary[i];
	}
	std::string query;
	std::cin >> query;
	autocomplete(dictionary, size,query);
	
	delete[]dictionary;
	return 0;
}