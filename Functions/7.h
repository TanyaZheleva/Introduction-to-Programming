#pragma once
#include <iostream>
#include <math.h>
int reverse(int num)
{
	int reversed = 0;
	int temp = num;
	int size = 0;
	while (temp != 0)
	{
		temp /= 10;
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		reversed += (num % 10) * pow(10, size - i-1);
		num /= 10;
	}
	return reversed;
}
int main()
{
	int num;
	std::cin >> num;
	std::cout << reverse(num);
	return 0;
}
