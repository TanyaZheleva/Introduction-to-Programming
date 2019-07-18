#pragma once
#include <iostream>

int main()
{
	int n,k;
	std::cin >> n >> k;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int [k];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			std::cout << matrix[i][j];
		}
		std::cout << '\n';
	}

	for (int i = 0; i < n; i++)
	{
		delete matrix[i];
	}
	delete[] matrix;
	return 0;
}