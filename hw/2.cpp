/**
*
* Solution to homework task 09
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* 2018/2019 academic year
*
* @author Tanya Zheleva
* @idnumber 62288
* @task 2
* @compiler  VC
*
*/

#include<iostream>

int main()
{
	char date[11];
	int day;
	int month;
	int year;
	int temp = 0;
	int step = 3;
	bool correctDate = false;
	while (correctDate == false)
	{
		for (int i = 0; i < 10; i++)
		{
			std::cin >> date[i];
		}
		date[10] = '\0';

		day = 0;
		month = 0;
		year = 0;
		temp = 0;
		step = 3;
		for (int i = 0; i < 10; i++)
		{
			if (i < 2)
			{
				temp = date[i] - 48;
				day += temp * pow(10, 1 - i);
			}
			if (i > 2 && i < 5)
			{
				temp = date[i] - 48;
				month += temp * pow(10, i - pow(2, i - 2));
			}
			if (i > 5)
			{
				temp = date[i] - 48;
				year += temp * pow(10, step);
				step--;
			}
		}

		if (year > 0)
		{
			if (month > 0 && month < 12)
			{
				if ((year % 100) / 4 == 0 && month == 2 && day <= 29)
				{
					correctDate = true;
				}
				if ((year % 100) / 4 != 0 && month == 2 && day <= 28)
				{
					correctDate = true;
				}
				if (((month < 8 && month % 2 != 0) || (month > 7 && month % 2 == 0)) && month != 2 && day <= 31)
				{
					correctDate = true;
				}

				if (((month < 8 && month % 2 == 0) || (month > 7 && month % 2 != 0)) && month != 2 && day <= 30)
				{
					correctDate = true;
				}
			}
		}
		if (correctDate == false)
		{
			std::cout << "Wrong date! Please enter again!\n";
		}
	}

	int daysPassed = 0;
	daysPassed = (year - 1) * 365 + day - 1;

	if (month == 2)
	{
		daysPassed += 30;
	}

	if (month > 2)
	{
		daysPassed = daysPassed + 28 + (month - 2) * 30;
		if ((year % 100) / 4 == 0)
		{
			daysPassed++;
		}
	}

	for (int i = 4; i < year; i += 4)
	{
		daysPassed++;
	}

	for (int i = 1; i < month; i++)
	{
		if (((i < 8 && i % 2 != 0) || (i > 7 && i % 2 == 0)))
		{
			daysPassed++;
		}
	}

	std::cout << daysPassed << " days since 01.01.0001\n";
	return 0;
}