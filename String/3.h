#pragma once
#include <iostream>
int Len(const char* str)
{
	int length = 0;
	while (str[length]!='\0')
	{
		length++;
	}
	return length;
}

int main()
{
	char str[100] = "!-..- is not a word";
	int len = Len(str);
	int count = 1;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == 32)
		{
			if (str[i - 1] > 96 && str[i - 1] < 123)
			{
				count++;
			}
		}
	}
	std::cout << str<<'\n';
	std::cout << count;
	return 0;
}
