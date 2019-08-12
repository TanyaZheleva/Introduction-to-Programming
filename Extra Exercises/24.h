#pragma once
#include <iostream>
#include <string.h>

std::string editDistance(std::string& a, std::string& b)
{
	size_t lengthB = b.size();
	size_t lengthA = a.size();
	int count = 0;
	if (lengthA != lengthB)
	{
	a.resize(lengthB);
		
	}

	for (size_t i = 0; i < lengthB; i++)
	{
		if (a[i] != b[i]||i>=lengthA)
		{
			a[i] = b[i];
			count++;
		}
	}

	std::cout << count << '\n';
	return a;
}

int main()
{
	std::string one;
	std::string two;
	std::cin >> one >> two;
	editDistance(one, two);
	std::cout << one << '\n';
	return 0;
}