#pragma once
#include <iostream>

void check(int* _set, int _sizeSet, int* _sub, int _sizeSub)
{
	int countSubsets = pow(2, _sizeSet);
	int** subsets = new int* [countSubsets];
	for (int i = 0; i < countSubsets; i++)
	{
		subsets[i] = new int[_sizeSet];
	}
	int subIndex = 0;
	int innerIndex = 0;
	for (int i = 0; i < countSubsets; i++)
	{
		for (int j = 0; j < _sizeSet; j++)
		{
			if ((i & (1 << j)) > 0)
			{
				subsets[subIndex][innerIndex] = _set[j];
				innerIndex++;
			}
		}
		subIndex++;
		innerIndex = 0;
	}

	bool is = false;

	for (int i = 0; i < countSubsets; i++)
	{
		for (int j = 0; j < _sizeSub; j++)
		{
			if (subsets[i][j] == _sub[j])
			{
				is = true;
			}
			else
			{
				is = false;
			}
		}
	}

	if (is == true)
	{
		std::cout << "subset";
	}
	else
	{
		std::cout << " not a subset";
	}
	
	for (int i = 0; i < countSubsets; i++)
	{
		delete[]subsets[i];
	}
	delete[] subsets;
}


int main()
{
	int sizeSet;
	std::cin >> sizeSet;
	int* set = new int[sizeSet];
	for (int i = 0; i < sizeSet; i++)
	{
		std::cin >> set[i];
	}
	int sizeSub;
	std::cin >> sizeSub;
	int* sub = new int[sizeSub];
	for (int i = 0; i < sizeSub; i++)
	{
		std::cin >> sub[i];
	}
	check(set, sizeSet, sub, sizeSub);
	delete[] set;
	delete[]sub;
	return 0;
}