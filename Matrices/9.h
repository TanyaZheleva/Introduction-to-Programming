#pragma once
#include <iostream>
#include <iomanip>

int main()
{
	
	const int size = 4;
	bool matrix[size][size] = {
		1,1,0,1,
		1,0,1,0,
		0,0,1,1,
		1,0,1,0
	};
	bool nextMatrix[size][size] = {
		1,1,0,1,
		1,0,1,0,
		0,0,1,1,
		1,0,1,0
	};

	int count = 0;
	for (int p = 0; p < 1; p++)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				count = 0;
				if (i == 0 || j == 0)
				{
					//a
					if (matrix[i + 1][j] == true)
					{
						count++;
					}
					if ((j >= 0 && j < size - 1 && i == 0) || (i >= 0 && i < size - 1 && j == 0))
					{
						//b
						if (matrix[i + 1][j + 1] == true)
						{
							count++;
						}
						//c
						if (matrix[i][j + 1] == true)
						{
							count++;
						}
					}
					if ((j <= size - 1 && i == 0) || (i == size - 1 && j == 0))
					{
						//e
						if (matrix[i + 1][j - 1] == true)
						{
							count++;
						}
						//d
						if (matrix[i][j - 1] == true)
						{
							count++;
						}
					}
					if (i > 0 && i < size - 1 && j == 0)
					{
						//f
						if (matrix[i - 1][j] == true)
						{
							count++;
						}
						//g
						if (matrix[i - 1][j + 1] == true)
						{
							count++;
						}
					}
				}

				if (i == size - 1)
				{
					if (matrix[i - 1][j] == true)
					{
						count++;
					}

					if (j >= 0)
					{
						if (matrix[i][j + 1] == true)
						{
							count++;
						}

						if (matrix[i - 1][j + 1] == true)
						{
							count++;
						}
					}

					if (j <= size - 1)
					{
						if (matrix[i][j - 1] == true)
						{
							count++;
						}
						//h
						if (matrix[i - 1][j - 1] == true)
						{
							count++;
						}
					}
				}

				if (j == size - 1)
				{
					if (matrix[i][j - 1] == true)
					{
						count++;
					}

					if (i == 0)
					{
						if (matrix[i + 1][j] == true)
						{
							count++;
						}
						if (matrix[i + 1][j - 1] == true)
						{
							count++;
						}
					}

					if (i <= size + 1)
					{
						if (matrix[i - 1][j - 1] == true)
						{
							count++;
						}
					}
					if (i > 0 && i < size - 1)
					{
						if (matrix[i][j + 1] == true)
						{
							count++;
						}
						if (matrix[i - 1][j] == true)
						{
							count++;
						}
						if (matrix[i - 1][j + 1] == true)
						{
							count++;
						}
					}
				}

				if (0 < i && i < size - 1 && 0 < j && j < size - 1)
				{

					//a
					if (matrix[i + 1][j] == true)
					{
						count++;
					}

					//b
					if (matrix[i + 1][j + 1] == true)
					{
						count++;
					}
					//c
					if (matrix[i][j + 1] == true)
					{
						count++;
					}

					//e
					if (matrix[i + 1][j - 1] == true)
					{
						count++;
					}
					//d
					if (matrix[i][j - 1] == true)
					{
						count++;
					}

					//f
					if (matrix[i - 1][j] == true)
					{
						count++;
					}
					//g
					if (matrix[i - 1][j + 1] == true)
					{
						count++;
					}

					//h
					if (matrix[i - 1][j - 1] == true)
					{
						count++;
					}
				}

				if (count < 2 || count>3)
				{
					nextMatrix[i][j] = false;
				}
				if (count == 3)
				{
					nextMatrix[i][j] = true;
				}
				if (count == 2 && nextMatrix[i][j] == true)
				{
					nextMatrix[i][j] = true;
				}

			}
		}

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				matrix[i][j] = nextMatrix[i][j];
			}
		}

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				std::cout << matrix[i][j] << std::setw(2);
			}
			std::cout << '\n';
		}
	}

	return 0;
}
