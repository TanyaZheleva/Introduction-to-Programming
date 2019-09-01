#pragma once
#include <iostream>

int** multiply(int** m1, int r1, int c1, int** m2, int r2, int c2)
{
	if (c1 == r2)
	{
		int** pr = new int* [r1];
		for (int i = 0; i < r1; i++)
		{
			pr[i] = new int[c2];
		}

		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				pr[i][j] = 0;
			}
		}

		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				for (int p = 0; p < c1; p++)
				{
					pr[i][j] += m1[i][p] * m2[p][j];
				}
			}
		}
		return pr;
	}
	return nullptr;
}

int main()
{
	int rows1;
	int cols1;
	std::cin >> rows1 >> cols1;
	int** matrix1 = new int* [rows1];
	for (int i = 0; i < rows1; i++)
	{
		matrix1[i] = new int[cols1];
	}
	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < cols1; j++)
		{
			std::cin>>matrix1[i][j];
		}
	}

	int rows2;
	int cols2;
	std::cin >> rows2 >> cols2;
	int** matrix2 = new int* [rows2];
	for (int i = 0; i < rows2; i++)
	{
		matrix2[i] = new int[cols2];
	}

	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < cols2; j++)
		{
			std::cin >> matrix2[i][j];
		}
	}
	int** arr=multiply(matrix1, rows1, cols1, matrix2, rows2, cols2);

	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < cols2; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << "\n";
	}

	for (int i = 0; i < rows1; i++)
	{
		delete[] matrix1[i];
	}
	delete[] matrix1;

	for (int i = 0; i < rows2; i++)
	{
		delete[] matrix2[i];
	}
	delete[] matrix2;
	delete[] arr;
	return 0;
}