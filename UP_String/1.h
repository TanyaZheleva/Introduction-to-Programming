#pragma once
#include <iostream>

int strLen(const char* arr)
{
	int length = 0;
	while (arr[length] != '\0')
	{
		length++;
	}
	return length;
}

bool strCmp(const char* a,const char* b)
{
	int sizeA = strLen(a);
	int sizeB = strLen(b);
	if (sizeA == sizeB)
	{
		for (int i = 0; i < sizeA; i++)
		{
			if (a[i] != b[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

char* strCat(char* destination,const char* source)
{
	int len = strLen(destination);
	int size = strLen(source);

		int j = 0;
		for (int i = len; i < len+size; i++)
		{
			destination[i] = source[j];
			j++;
		}
		destination[len + size] = '\0';
	
	return destination;
}

char* strCpy(char* destination, const char* source)
{
	int len = strLen(destination);
	int size = strLen(source);
	for (int i = 0; i < size; i++)
	{
		destination[i] = source[i];
	}
	destination[size] = '\0';
	return destination;
}


int main()
{
	char* arr = new char[100];
	arr[0] = '\0';
	char* str = new char[100];
	str[0] = '\0';
	
	//strlen
	std::cin >> arr;
	std::cout << strLen(arr);
	
	//strcmp
	std::cin >> arr;
	std::cin >> str;
	std::cout << strCmp(arr, str);
	
	//strcat
	strCat(arr, "hello");
	strCat(arr," world");
	std::cout << arr;
	
	//strcpy
	std::cin >> str;
	strCpy(arr, "hello");
	std::cout << arr << '\n';
	strCpy(arr, str);
	std::cout << arr << '\n';
	delete[] arr;
	delete[] str;

	return 0;
}
