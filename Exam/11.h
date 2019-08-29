#pragma once
#include <iostream>

bool doExist(char* symbols, char* word)
{
	int i = 0;
	int j = 0;
	while (symbols[i] != '\0')
	{
		if (symbols[i] == word[j])
		{
			j++;
		}
		else
		{
			j = 0;
		}
		if (word[j] == '\0')
		{
			return true;
		}
		i++;
	}
	return false;
}

int main()
{
	int size;
	std::cin >> size;
	char* symbols = new char[size];
	std::cin >> symbols;
	int length;
	std::cin >> length;
	char* word = new char[length];
	std::cin >> word;
	std::cout << doExist(symbols, word);

	return 0;
}