#pragma once
#include <iostream>

int len(char* str)
{
	int i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return i;
}

bool doExist(char* symbols, char* word)
{
	int length = len(symbols)-1;
	int i = 0;
	while (length>=0)
	{
		if (symbols[length] == word[i])
		{
			i++;
		}
		else
		{
			i = 0;
		}
		length--;
		if (word[i] == '\0')
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int size;
	std::cin >> size;
	char* symbols = new char[size+1];
	std::cin >> symbols;

	int length;
	std::cin >> length;
	char* word = new char[length+1];
	std::cin >> word;

	std::cout << doExist(symbols, word);

	delete[] symbols;
	delete[] word;
	return 0;
}