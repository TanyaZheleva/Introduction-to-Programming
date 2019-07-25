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
	/*int n = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[j][i] = n;
			n++;
		}
	}*/

	//b
	/*int num = 1;
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
	*/

	//c
	/*int num = 1;
	int p = 0;
	int q = 0;
	for (int i = 1; i <= size; i++)
	{
		q = 0;
		p = size - i;
		matrix[p][q] = num;
		num++;

		while (p < size - 1)
		{
			p++;
			q++;
			matrix[p][q] = num;
			num++;
		}
	}

	int s = 0;
	int t = 0;
	for (int j = 1; j < size; j++)
	{
		s = 0;
		t = j;
		matrix[s][t] = num;
		num++;
		while (t < size-1)
		{
			t++;
			s++;
			matrix[s][t] = num;
			num++;
		}
	}*/

	//d
	int num = 1;
	int i;
	int row = 0;
	int col = 0;
	int lastRow = size - 1;
	int lastCol = size - 1;

	while (row<=lastRow && col<=lastCol)
	{
		for (i = col; i <= lastCol; i++)
		{
			matrix[row][i] = num;
			num++;
		}
		row++;

		for (i = row; i <= lastRow; i++)
		{
			matrix[i][lastCol] = num;
			num++;
		}
		lastCol--;

		if (row <= lastRow)
		{
			for (i = lastCol; i >= col; i--)
			{
				matrix[lastRow][i] = num;
				num++;
			}
			lastRow--;
		}

		if (col <= lastCol)
		{
			for (i = lastRow; i >= row; i--)
			{
				matrix[i][col] = num;
				num++;
			}
			col++;
		}
	}


	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << matrix[i][j] << std::setw(4);
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