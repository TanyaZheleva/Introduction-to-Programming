#pragma once
#include <iostream>
#include <iomanip>

int main()
{
	int size;
	std::cin >> size;

	int** matrix = new int* [size];
	for (int i = 0; i < size; i++)
	{
		matrix[i] = new int[size];
	}
	//a
    /*int n = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[j][i] = n;
			n++;
		}
	}*/

	//b
	/*int num = 1;
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{

			matrix[index][i] = num;
			num++;
			if (i%2==0)
			{
				index++;
			}
			else
			{
				index--;
			}
		}
		if (i % 2 == 0)
		{
			index--;
		}
		else
		{
			index++;
		}
	}
	*/

	//c
	/*int num = 1;
	int p = 0;
	int q = 0;
	for (int i = 1; i <= size; i++)
	{
		q = 0;
		p = size - i;
		matrix[p][q] = num;
		num++;

		while (p < size - 1)
		{
			p++;
			q++;
			matrix[p][q] = num;
			num++;
		}
	}

	int s = 0;
	int t = 0;
	for (int j = 1; j < size; j++)
	{
		s = 0;
		t = j;
		matrix[s][t] = num;
		num++;
		while (t < size-1)
		{
			t++;
			s++;
			matrix[s][t] = num;
			num++;
		}
	}*/

	//d


	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << matrix[i][j] << std::setw(3);
		}
		std::cout << '\n';
	}

	for (int i = 0; i < size; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}