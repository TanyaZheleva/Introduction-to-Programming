#pragma once
#include <iostream>
int length(char* arr)
{
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return i;
}

//int asterisk(char* str, int start, int end, int counts)
//{
//	if (str[end] == '*' && end > start)
//	{
//		counts++;
//		return asterisk(str, start, end - 1, counts);
//	}
//	else
//	{
//		return counts;
//	}
//}

bool regularExpressionMatching(char* str, char* expr)
{
	int strSize = length(str);
	int exprSize = length(expr);
	if (exprSize >= strSize)
	{
		int j = 0;
		int i = 0;
		bool check = false;
		bool dot = false;
		while (i < exprSize)
		{
			if (expr[i] == '.')
			{
				j++;
				i++;
				if (check == true)
				{
					dot = true;
				}
			}

			while (expr[i] == '*')
			{
				if (j > 0)
				{
					if (dot == true)
					{
						j++;
					}
					if (check == false)
					{
						j++;
					}
				}
				i++;
			}

			while (expr[i] != '.' && expr[i] != '*' && i < exprSize)
			{
				if (j < strSize)
				{
					if (expr[i] != str[j])
					{
						check = false;
						return false;
					}
					else
					{
						i++;
						j++;
						check = true;
					}
				}
				else
				{
					return false;
				}
			}
		}
		if (j == strSize && i == exprSize && check == true)
		{
			return true;
		}
	}
	return false;

}

int main()
{
	int size;
	std::cin >> size;
	char* str = new char[size];
	std::cin >> str;
	int length;
	std::cin >> length;
	char* regExpr = new char[length + 1];
	std::cin >> regExpr;
	std::cout << regularExpressionMatching(str, regExpr);
	return 0;
}