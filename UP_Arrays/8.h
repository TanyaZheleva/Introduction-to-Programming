#pragma once
#include <iostream>

void copy(int* _source, int* _destination, unsigned int _s)
{
	for (unsigned int i = 0; i < _s; i++)
	{
		_destination[i] = _source[i];
	}
}

int main()
{
	unsigned int s;
	std::cin >> s;
	int* source = new int[s];
	int* destination = new int[s];
	for (unsigned int i = 0; i < s; i++)
	{
		std::cin >> source[i];
		destination[i] = 0;
	}
	copy(source, destination, s);
	for (unsigned int i = 0; i < s; i++)
	{
		std::cout << destination[i] << " ";
	}
	return 0;
}