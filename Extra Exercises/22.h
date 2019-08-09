#pragma once
#include <iostream>

void zigzag(char* str, int size, int lines)
{
	int i = 0;//index of line
	int j = 1;//index in string
	//int frontSpaces = 0;
	int intervals = 2 * lines - 3;
	int temp;
	//start first line
	for (int t = 0; t < size; t += 2 * lines - 2)
	{

		std::cout << str[t];
		for (int p = 0; p < intervals; p++)
		{
			std::cout << " ";
		}
	}
	std::cout << "\n";
	//end first line
	i++;
	intervals -= 2;
	temp = j;
	int repeats = 0;
	while (i < lines)
	{
		temp = j;
		repeats = 0;
		while (temp + 2 * i < size)
		{
			for (int q = 0; q < i; q++)
			{
				std::cout << ' ';
			}

			if (repeats > 0)
			{
				temp += 2 * i;
			}

			std::cout << str[temp];

			for (int p = 0; p < intervals; p++)
			{
				std::cout << " ";
			}
			if (intervals != 0)
			{
				temp += intervals + 1;
				if (temp < size)
				{
					std::cout << str[temp];
				}
			}

			for (int p = 1; p < i; p++)
			{
				std::cout << ' ';
			}

			repeats++;
		}
		i++;
		j++;
		intervals -= 2;
		if (intervals < 0)
		{
			intervals = 0;
		}
		std::cout << '\n';
	}
}

int main()
{
	int size;
	std::cin >> size;
	char* sentance = new char[size + 1];
	std::cin.get();
	std::cin.getline(sentance, size + 1);
	int lines;
	std::cin >> lines;
	zigzag(sentance, size, lines);
	return 0;
}