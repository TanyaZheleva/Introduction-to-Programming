#pragma once
#include <iostream>

bool palindrome(const char* str)
{
	int length = strlen(str);
	for (int i = 0; i < length / 2; i++)
	{
		if (str[i] != str[length - i-1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	char* str = new char[100];
	str[0] = '\0';
	std::cin >> str;
	std::cout << palindrome(str);
	delete[] str;

	return 0;
}
