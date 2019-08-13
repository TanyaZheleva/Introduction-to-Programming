
#include<iostream>

bool leapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	return false;
}

bool checkDate(int year, int month, int day)
{
	if (year > 0)
	{
		if (month > 0 && month < 12 && day>0)
		{
			if (leapYear(year) == true && month == 2 && day <= 29)
			{
				return true;
			}
			if (leapYear(year) == false && month == 2 && day <= 28)
			{
				return true;
			}
			if (((month < 8 && month % 2 != 0) || (month > 7 && month % 2 == 0)) && month != 2 && day <= 31)
			{
				return true;
			}
			if (((month < 8 && month % 2 == 0) || (month > 7 && month % 2 != 0)) && month != 2 && day <= 30)
			{
				return true;
			}
		}
		return false;
	}
	return false;
}

int main()
{
	char date[11];
	int day = 0;
	int month = 0;
	int year = 0;
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
		day = (date[0] - 48) * 10 + date[1] - 48;
		month = (date[3] - 48) * 10 + date[4] - 48;
		for (int i = 6; i < 10; i++)
		{
			temp = date[i] - 48;
			year += temp * pow(10, step);
			step--;
		}

		correctDate = checkDate(year, month, day);
		if (correctDate == false)
		{
			std::cout << "Wrong date! Please enter again!\n";
		}
	}

	int daysPassed = 0;
	daysPassed = (year - 1) * 365 + day - 1;

	int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (int i = 1; i < month; i++)
	{
		daysPassed += months[i - 1];
	}

	if (leapYear(year) == true && month > 2)
	{
		daysPassed++;
	}

	for (int i = 1; i < year; i++)
	{
		if (leapYear(i) == true)
		{
			daysPassed++;
		}
	}

	std::cout << daysPassed << " days since 01.01.0001\n";
	return 0;
}