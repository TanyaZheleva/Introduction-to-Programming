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
/*	int n = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[j][i] = n;
			n++;
		}
	}*/

	//b
	int num = 1;
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