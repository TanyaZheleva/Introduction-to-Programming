#pragma once
#include <iostream>

void Revert(char str[])
{
	int dif = 32;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			i++;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
			i++;
		}
	}
}

int main()
{
	char str[200];
	std::cin >> str;
	Revert(str);
	std::cout << str;
	return 0;
}