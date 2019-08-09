#pragma once
#include <iostream>

bool isASentance(char* str, int size)
{
	if (str[0] >= 'A' && str[0] <= 'Z')
	{
		if ((str[1] >= 'a' && str[1] <= 'z') || str[1] == ' ')
		{
			for (int i = 2; i < size; i++)
			{
				if (str[i]<'a' || str[i]>'z')
				{
					if (str[i] != ',' && str[i] != ':' && str[i] != ';' && str[i] !=' '
						&& str[i] != '.' && str[i] != '!' && str[i] != '?')
					{
						return false;
					}
				}
			}
			for (int i = 1; i < size-1; i++)
			{
				if (str[i] == ' ')
				{
					if (str[i + 1] == ' ')
					{
						return false;
					}
				}
			}

			if (str[size - 2] == ' ')
			{
				return false;
			}
			if (str[size - 2] >= 'a' && str[size - 2] <= 'z')
			{
				if (str[size - 1] == '.' || str[size - 1] == '!' || str[size - 1] == '?')
				{
					return true;
				}
				return false;
			}
		}
		return false;
	}
	return false;
}

int main()
{
	int size;
	std::cin >> size;
	char* sentance = new char[size + 1];

	std::cin.get();
	std::cin.getline(sentance, size + 1);

	std::cout << isASentance(sentance, size);
	return 0;
}