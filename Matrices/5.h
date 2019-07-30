#pragma once
#include <iostream>

int main()
{
	int rows;
	std::cin >> rows;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[rows];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	int sum = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i == j)
			{
				sum += matrix[i][j];
			}
		}
	}

	std::cout << sum;
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}