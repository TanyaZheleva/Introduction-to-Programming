#pragma once
#include <iostream>

void rectangle(int length, int width, char symbol)
{
	int spacesOnLine = (80 - width) / 2;
	int spacesOnRow = (25 - length) / 2;

	for (int p = 0; p < spacesOnRow; p++)
	{
		std::cout << "\n";
	}

	for (int i = 0; i < length; i++)
	{
		for (int q = 0; q < spacesOnLine; q++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < width; j++)
		{
			std::cout << symbol;
		}
		std::cout << '\n';
	}
	for (int p = 0; p < spacesOnRow; p++)
	{
		std::cout << "\n";
	}
}

int main()
{
	int length;
	int width;
	std::cin >> length;
	std::cin >> width;
	while (length <= 0 || width <= 0)
	{
		std::cout << "invalid values; enter again\n";
		std::cin >> length >> width;
	}
	char symbol;
	std::cin >> symbol;
	rectangle(length, width, symbol);
	return 0;
}