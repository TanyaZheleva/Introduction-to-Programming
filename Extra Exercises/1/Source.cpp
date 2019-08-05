#include <iostream>
void sort(int* arr, int size)
{
	int temp;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int fixedPoint(int* arr,int size)
{
	sort(arr, size);
	if (arr[0] == arr[size - 1])
	{
		if (arr[0] == 0)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	if (arr[0] > -1)
	{
		for (int i = arr[0]; i < size; i++)
		{
			if (arr[i] == i)
			{
				return i;
			}
		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == i)
			{
				return i;
			}
		}
	}
	return -1;
}

int main()
{
	int size;
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << fixedPoint(arr, size);
	return 0;
}