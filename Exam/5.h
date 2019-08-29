#pragma once
#include <iostream>

int sumAboveDiagonal(int n, int** matrix)
{
	int sum = 0;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
}

int main()
{
	int n = 0;
	while (n <= 0)
	{
		std::cin >> n;
	}

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
	std::cout << sumAboveDiagonal(n, matrix);

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}