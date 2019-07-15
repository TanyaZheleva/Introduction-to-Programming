#pragma once
#include <iostream>

int main()
{

	int n;
	std::cin >> n;
	int num1 = 1;
	int num2 = 1;
	int temp = 0;
	for (int i = 0; i < n - 2; i++)
	{
		temp = num2;
		num2 += num1;
		num1 = temp;
	}
	std::cout << num2;
}
	
