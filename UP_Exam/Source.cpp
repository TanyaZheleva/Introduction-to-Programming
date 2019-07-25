#include <iostream>

int main()
{
	int size;
	std::cin >> size;
	while (size > 500)
	{
		std::cin >> size;
	}
	char* str = new char[size + 1];
	std::cin.get();
	std::cin.get(str, size);

	int length = 0;
	char* first = new char[size / 2];
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		length++;
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i]>122)
		{
			first[count] = str[i - length + 1];
			count++;
			length = 0;
		}
	}
	first[count] = '\0';
	
	char temp;
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - i - 1; j++)
		{
			if (first[i] > first[i + 1])
			{
				temp = first[i];
				first[i] = first[i + 1];
				first[i + 1] = temp;
			}
		}
	}
	
	int len = 0;
	int index;
	
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (str[j] == first[i])
			{
				if (j == 0 || (j != 0 && str[j - 1] == ' '))
				{
					index = j;
					while ((str[index] >= 65 && str[index] <= 90) || (str[index] >= 97 && str[index] <= 122))
					{
						len++;
						index++;
					}
					for (int q = j; q < j + len; q++)
					{
						std::cout << str[q];
					}
					std::cout << '\n';
					len = 0;
					break;
				}
			}
		}
	}

	delete[] first;
	delete[] str;
	return 0;
}