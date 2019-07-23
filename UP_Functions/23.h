#pragma once
#include <iostream>

int tribonacci(int num)
{
	int pppt = 0;
	int ppt = 0;
	int pt = 1;
	int t = 1;
	if (num > 4)
	{
		for (int i = 3; i < num; i++)
		{
			t = pt + ppt+pppt;
			pppt = ppt;
			ppt = pt;
			pt = t;
		}
	}
	if (num < 3)
	{
		return 0;
	}
	if(num>2&&num<5)
	{
		return 1;
	}
	return t;
}

int main()
{
	int num;
	std::cin >> num;
	std::cout << tribonacci(num);
	return 0;
}
