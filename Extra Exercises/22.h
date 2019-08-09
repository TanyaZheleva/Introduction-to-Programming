#pragma once
#include <iostream>

void zigzag(char* str, int size,int lines)
{
	int i = 0;//index of line
	int j = 0;//index in string
	//int frontSpaces = 0;
	int intervals = 2 * lines - 3;
	while (j < size)
	{
		if (i < lines)
		{
			for ( int q = 0; q < i; q++)
			{
				std::cout << ' ';
			}
			std::cout << str[j];
			for (int p = 0; p < intervals; p++)
			{
				std::cout << " ";
			}
			i++;
			j++;
		}
		if (i >= lines)
		{

		}
	}
}

int main()
{
	int size;
	std::cin >> size;
	char* sentance = new char[size + 1];
	std::cin.get();
	std::cin.getline(sentance, size+1);
	int lines;
	std::cin >> lines;
	zigzag(sentance, size,lines);
	return 0;
}