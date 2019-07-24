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
char* cat(char* dest, const char* source)
{
	int len = Len(dest);
	int size = Len(source);
	int j = 0;
	for (int i = len; i < len+size; i++)
	{
		dest[i] = source[j];
		j++;
	}
	dest[len + size] = '\0';
	return dest;
}

void swap(char* str1, char* str2)
{
	char fl1 = str1[0];
	char fl2 = str2[0];
	str1[0] = fl2;
	str2[0] = fl1;
}

int main()
{
	char* str1 = new char[100];
	char* str2 = new char[100];
	str1[0] = '\0';
	str2[0] = '\0';
	std::cin >> str1;
	char* temp = new char(*str1);
	for (int i = 0; i <= Len(str1); i++)
	{
		temp[i] = str1[i];
	}
	std::cin >> str2;
	std::cout << Len(str1) << " " << Len(str2) << "\n";
	std::cout << cat(temp, str2) << '\n';
	swap(str1, str2);
	std::cout << str1 << " " << str2 << "\n";
	return 0;
}
