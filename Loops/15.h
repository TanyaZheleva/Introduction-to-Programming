#pragma once
#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	int myNum = 0;
	bool guess = false;
	bool bigger = false;
	while (guess == false)
	{
		std::cout << "Is " << myNum << " your number?\n";
		std::cin >> guess;
		if (guess == true)
		{
			std::cout << "Yay!";
			break;
		}
		else
		{
			std::cout << "Is your number bigger than " << myNum << "?\n";
			std::cin >> bigger;
			if (bigger)
			{
				myNum++;
			}
			else
			{
				myNum--;
			}
		}
	}
	return 0;
}