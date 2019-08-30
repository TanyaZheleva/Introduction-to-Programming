#pragma once
#include <iostream>

long getWords(char str[])
{
	int i = 0;
	long count = 0;
	bool space = true;

	if (str[0] == '\0')
	{
		return -1;
	}
	
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (space == true)
			{
				count++;
				space = false;
			}
		}
		else
		{
			if (space == false)
			{
				space = true;
			}
		}
		i++;
	}
	return count;
}

int main()
{
	char str[200];
	std::cin.get(str,200);
	std::cout << getWords(str);

	return 0;
}