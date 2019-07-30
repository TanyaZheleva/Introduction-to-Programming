/**
*
* Solution to homework task 09
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* 2018/2019 academic year
*
* @author Tanya Zheleva
* @idnumber 62288
* @task 3
* @compiler  VC
*
*/

#include<iostream>

int main()
{
	const int size = 200;
	char str[size];
	std::cin.get(str, size);

	int count = 0;
	int i = 0;
	int lastSpace = 0;
	while (str[i] != '\0')
	{
		if (str[i] <33&&i!=0&&str[i+1]>32)
		{
			count++;
			lastSpace = i;
		}
		i++;
	}

	if (lastSpace < i - 1)
	{
		count++;
	}

	std::cout << count;

	return 0;
}