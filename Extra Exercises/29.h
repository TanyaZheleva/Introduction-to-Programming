#pragma once
#include <iostream>
#include<iomanip>

void printClockwise(int** matrix, int rows, int cols)
{
	int i;
	int firstRow = 0;
	int firstCol = 0;
	int lastRow = rows - 1;
	int lastCol = cols - 1;

	while (firstRow <= lastRow && firstCol <= lastCol)
	{
		for (i = firstCol; i <= lastCol; i++)
		{
			std::cout << matrix[firstRow][i] << '\n';
		}
		firstRow++;

		for (i = firstRow; i <= lastRow; i++)
		{
			std::cout << matrix[i][lastCol] << '\n';
		}
		lastCol--;

		if (firstRow <= lastRow)
		{
			for (i = lastCol; i >= firstCol; i--)
			{
				std::cout<<matrix[lastRow][i] << '\n';
			}
			lastRow--;
		}

		if (firstCol <= lastCol)
		{
			for (i = lastRow; i >= firstRow; i--)
			{
				std::cout<<matrix[i][firstCol] << '\n';
			}
			firstCol++;
		}
	}
}

int main()
{
	int rows;
	int cols;
	std::cin >> rows >> cols;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}

	int num = 1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = num;
			num++;
		}
	}

	printClockwise(matrix, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}