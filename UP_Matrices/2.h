#pragma once
#include <iostream>

void print(int** arr,int rows,int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << '\n';
	}
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[k];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	print(matrix,n,k);

	for (int i = 0; i < n; i++)
	{
		delete matrix[i];
	}
	delete[] matrix;
	return 0;
}