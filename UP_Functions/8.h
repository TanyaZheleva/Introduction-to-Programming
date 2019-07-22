#pragma once
#include <iostream>
float smallest(float one, float two, float three)
{
	if (one < two)
	{
		if (two < three)
		{
			return one;
		}
		else if(one<three)
		{
			return one;
		}
		else if (one > three)
		{
			return three;
		}
	}
	else
	{
		if (three < two)
		{
			return three;
		}
		else if (two < three)
		{
			return two;
		}
	}
}
int main()
{
	float num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;
	std::cout << smallest(num1, num2, num3);
	return 0;
}
