#pragma once
#include <iostream>

int main()
{
	int rows, cols;
	std::cin >> rows >> cols;

	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	int sum = 0;
	int maxSum = 0;
	int rowIndex = 0;
	int colIndex = 0;

	for (int i = 0; i < rows-1; i++)
	{
		for (int j = 0; j < cols-1; j++)
		{
			sum = matrix[i][j] + matrix[i][j + 1] + matrix[i + 1][j] + matrix[i + 1][j];
			if (maxSum < sum)
			{
				rowIndex = i;
				colIndex = j;
			}
			sum = 0;
		}
	}

	for (int i = rowIndex; i < rowIndex+2; i++)
	{
		for (int j = colIndex; j < colIndex+2; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}