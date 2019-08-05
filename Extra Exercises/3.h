#pragma once
#include <iostream>

int* repetitions(char* str, int size)
{
	int index = 0;
	int* repetition = new int[size];
	for (int i = 0; i < size; i++)
	{
		repetition[i] = 0;
	}

	for (int i = 0; i < size - 1; i++)
	{
		if (str[i] == str[i + 1])
		{
			repetition[index]++;
		}
		else
		{
			repetition[index]++;
			index++;
		}
	}
	repetition[index]++;

	return repetition;
}

void adjacent(char* str, int size)
{
	int* repeats = repetitions(str, size);
	int maxrepeats = 0;
	int indexMaxRepeats = 0;
	for (int i = 0; i < size; i++)
	{
		if (maxrepeats < repeats[i])
		{
			maxrepeats = repeats[i];
			indexMaxRepeats = i;
		}
	}
	int sum = 0;
	char* arr = new char[size];
	
	if (indexMaxRepeats == 0)
	{
		sum = maxrepeats;
		if (maxrepeats * 2 - size == 0)
		{
			sum--;
		}
		for (int i = 0; i < size; i++)
		{
			if (sum + i < size)
			{
				arr[i] = str[sum + i];
			}

			if (0 <= sum - i)
			{
				if (sum + i < size)
				{
					arr[i + 1] = str[sum + i];
				}
				else
				{
					arr[i] = str[sum - i];
				}
			}
		}
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i];
		}
	}

	if ((indexMaxRepeats > 0 && maxrepeats * 2 - size == 0)||(maxrepeats==size-indexMaxRepeats&& maxrepeats * 2 - size == 1))
	{
		for (int i = 0; i < indexMaxRepeats; i++)
		{
			sum += repeats[i];
		}
		if (maxrepeats == size - indexMaxRepeats && maxrepeats * 2 - size == 1)
		{
			sum--;
		}
		for (int i = 0; i < size; i++)
		{
			if (0 <= sum - i)
			{
				arr[i] = str[sum - i];
			}

			if (sum + i < size)
			{
				if (0 <= sum - i)
				{
					arr[i + 1] = str[sum + i];
				}
				else
				{
					arr[i] = str[sum + i];
				}
			}
		}
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i];
		}
	}
	
	if (maxrepeats != size - indexMaxRepeats && maxrepeats * 2 - size == 1)
	{
		sum = maxrepeats-1;
		arr[0] = str[size - 1];
		for (int i = 0; i < size; i++)
		{

			if (0 <= sum - i)
			{
					arr[i + 1] = str[sum - i];
			}

			if (sum + i < size)
			{
				if (0 <= sum - i)
				{
					arr[i + 2] = str[sum + i];
				}
				else
				{
					arr[i + 1] = str[sum + i];
				}
			}
		}
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i];
		}
	}
	
	else
	{
		std::cout << "none\n";
	}
}

int main()
{
	int size;
	std::cin >> size;
	char* str = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		std::cin >> str[i];
	}
	str[size] = '\0';
	adjacent(str, size);
	return 0;
}