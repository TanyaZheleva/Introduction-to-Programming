#pragma once
#include <iostream>

bool compare(char* str, int end, char a)
{
	for (int i = 0; i < end; i++)
	{
		if (str[i] == a)
		{
			return true;
		}
	}
	return false;
}

int longestSubstring(char* str, int size, int k)
{
	char* substr = new char[size + 1];
	int index = 0;
	int maxLen = 0;
	int temp = k;

	for (int i = 0; i < size; i++)
	{
		while (temp > 0)
		{
			substr[index] = str[i];
			index++;
			i++;
			if (compare(substr, index, str[i]) == false)
			{
				temp--;
			}
		}

		while (compare(substr, index, str[i]) == true)
		{
			substr[index] = str[i];
			index++;
			i++;
		}

		if (index >= maxLen)
		{
			maxLen = index;
		}
		i -= index;
		index = 0;
		substr[index] = str[i];
		temp = k;
	}

	return maxLen;
}

int main()
{
	int size;
	std::cin >> size;
	char* str = new char[size + 1];
	std::cin >> str;
	int characters;
	std::cin >> characters;
	std::cout << longestSubstring(str, size, characters);
}