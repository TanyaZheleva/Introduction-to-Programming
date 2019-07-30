#pragma once
#include <iostream>

void histogram(const char* str)
{
	int length = strlen(str);
	char current = str[0];
	int count = 0;
	bool repeated = false;
	for (int j = 0; j < length; j++)
	{
		current = str[j];
		count = 0;
		repeated = false;
		for (int p = 0; p < j; p++)
		{
			if (current == str[p])
			{
				repeated = true;
			}
		}
		if (repeated == false)
		{
			for (int i = 0; i < length; i++)
			{
				if (current == str[i])
				{
					count++;
				}
			}
			std::cout << current << " - " << count << '\n';
		}
	}
}

int main()
{
	char* str = new char[100];
	std::cin >> str;
	histogram(str);
	delete[] str;
	return 0;
}
