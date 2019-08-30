#pragma once
#include <iostream>

int* scalarProduct(int* a, int* b, int m)
{
	int* product = new int[m];
	for (int i = 0; i < m; i++)
	{
		product[i] = a[i] * b[i];
	}
	return product;
}

int main()
{
	int one[5] = { 1,2,3,4,5 };
	int two[5] = { 9,8,7,6,5 };
	int* pr = scalarProduct(one, two, 5);
	for (int i = 0; i < 5; i++)
	{
		std::cout << pr[i]<<" ";
	}
	delete[] pr;
	return 0;
}