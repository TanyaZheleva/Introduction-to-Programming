#pragma once
#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	//binary
	/*int size = 0;
	int temp = num;
	while (temp != 0)
	{
		temp /= 2;
		size++;
	}
	int* arr = new int[size];
	for (int p = 0; p < size; p++)
	{
		arr[p] = 0;
	}
	int i = 0;
	int tempnum = num;
	while (tempnum != 0)
	{
		arr[i] = tempnum % 2;
		tempnum /= 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		std::cout << arr[j];
	}

	delete[] arr;*/
	//hex
	/*int q = 0;
	int length = 0;
	int tem = num;
	while (tem > 0)
	{
		tem /= 16;
		length++;
	}

	int* arrH = new int[length];
	for (int a = 0; a < length; a++)
	{
		arrH[a] = 0;
	}
	int t = num;
	int h = 0;
	int y = 0;
	do
	{
		q = t / 16;
		arrH[y] = t - 16 * q;
		t = q;
		y++;
	} while (t > 0);

	for (int s = y-1; s >=0; s--)
	{
		if (arrH[s] < 10)
		{
			std::cout << arrH[s];
		}
		else
		{
			switch (arrH[s])
			{
			case 10:
			{
				std::cout << "A";
				break;
			}
			case 11:
			{
				std::cout << "B";
				break;
			}
			case 12:
			{
				std::cout << "C";
				break;
			}
			case 13:
			{
				std::cout << "D";
				break;
			}
			case 14:
			{
				std::cout << "E";
				break;
			}case 15:
			{
				std::cout << "F";
				break;
			}
			}
		}
	}
	delete[] arrH;*/
	//oct
	int te = num;
	int Size = 0;
	while (te > 0)
	{
		te /= 8;
		Size++;
	}
	int* oct = new int[Size];
	for (int w = 0; w < Size; w++)
	{
		oct[w] = 0;
	}
	te = num;
	int m = 0;
	int n = 0;
	while (te > 0)
	{
		m = te / 8;
		oct[n] = te - m * 8;
		te = m;
		n++;
	}
	for (int ww = Size-1; ww >= 0; ww--)
	{
		std::cout << oct[ww];
	}
	delete[] oct;
		return 0;
}