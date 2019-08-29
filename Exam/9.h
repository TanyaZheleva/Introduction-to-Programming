#pragma once
#include <iostream>

bool CheckDate(char date[])
{
	if (date[2] == '.')
	{
		for (int i = 0; i < 5; i++)
		{
			if (i != 2)
			{
				if (date[i]<'0' && date[i]>'9')
				{
					return false;
				}
			}
		}

		int day = (date[0]-'0') * 10 + date[1]-'0';
		int month = (date[3] - '0') * 10 + date[4]-'0';
		
		if (month == 2)
		{
			if (day >= 29)
			{
				return false;
			}
			else
			{
				return true;
			}
		}

		if (month >= 1 && month <= 12)
		{
			if (month < 8)
			{
				if (month % 2 == 1 && day > 31)
				{
					return false;
				}
				if (month % 2 == 0 && day > 30)
				{
					return false;
				}
				else
				{
					return true;
				}
			}

			if (month > 7)
			{
				if (month % 2 == 1 && day > 30)
				{
					return false;
				}
				if (month % 2 == 0 && day > 31)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
		}
		return false;
	}
	return false;
}

int main()
{
	char date[6];
	std::cin >> date;
	while (CheckDate(date) == false)
	{
		std::cout << "Wrong date! Enter again: ";
		std::cin >> date;
	}
	std::cout << "Correct date\n";
	
	return 0;
}