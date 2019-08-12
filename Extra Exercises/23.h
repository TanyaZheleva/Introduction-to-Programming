#pragma once
#include <iostream>
#include <string.h>


bool isAPalindrome(std::string str, size_t start, size_t end)
{
	size_t i = start;
	size_t j = end;

	while (j > i)
	{
		if (str[i] != str[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;

}

std::string findPalindrome(std::string str, size_t start, size_t end)
{
	size_t length = str.size();
	std::string palindrome;
	palindrome.resize(length);
	int index = 0;
	size_t p;
	for (size_t i = start; i < end; ++i)
	{
		p = i;
		for (size_t j = end; j > i; --j)
		{
			if (isAPalindrome(str, i, j))
			{
				if (j - i + 1 >= index)
				{
					index = 0;
					while (p <= j)
					{
						palindrome[index] = str[p];
						index++;
						p++;
					}
					palindrome[index] = '\0';
				}
			}
		}
	}
	return palindrome;
}

int main()
{
	std::string str;
	std::cin >> str;
	std::cout << findPalindrome(str, 0, str.size() - 1);

	return 0;
}