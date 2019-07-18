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

	float avg = 0.0f;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			avg += matrix[i][j];
		}
		std::cout << avg / cols<<" ";
		avg = 0.0f;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}