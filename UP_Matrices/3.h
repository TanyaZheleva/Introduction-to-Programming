#pragma once
#include <iostream>

void transpose(int** arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			std::cout << arr[j][i];
		}
		std::cout << '\n';
	}
}

int main()
{
	int n;
	std::cin >> n;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	transpose(matrix, n);

	for (int i = 0; i < n; i++)
	{
		delete matrix[i];
	}
	delete[] matrix;
	return 0;
}