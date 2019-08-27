#pragma once
#include <iostream>

void merge(int* one, int* two, int size)
{
	int* three = new int[size * 2];
	int i = 0;
	int j = 0;
	int p = 0;
	bool lastJ = false;
	bool lastP = false;
	while (i < size * 2)
	{
		while (one[j] <= two[p] && j < size)
		{
			three[i] = one[j];
			j++;
			i++;
		}
		
		while (one[j] >= two[p] && p < size)
		{
			three[i] = two[p];
			p++;
			i++;
		}
		if (j == size && p == size - 1)
		{
			three[i] = two[p];
			p++;
			i++;
		}
		if (j == size - 1 && p == size)
		{
			three[i] = one[j];
			j++;
			i++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << three[i] << " ";
	}
}

int main()
{
	int one[5] = { 0,2,3,4,10 };
	int two[5] = { 2,2,2,3,10 };
	merge(two, one, 5);

	return 0;
}