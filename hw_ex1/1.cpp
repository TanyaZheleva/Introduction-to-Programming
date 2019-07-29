#include <iostream>

int getLength(int number)
{
	int size = 0;
	while (number != 0)
	{
		number /= 10;
		size++;
	}
	return size;
}

int* getNumbers(int num)
{
	int size = getLength(num);
	int* numbers = new int[size];
	int divisor = 1;
	for (int i = 0; i < size; i++)
	{
		divisor = pow(10, size - i - 1);
		numbers[i] = num / divisor;
		num = num % divisor;
	}
	return numbers;
}


int main()
{
	int num=0;
	while (num>-65000 && num < 65000)
	{
		std::cin >> num;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if (num > -65000 && num < 65000)
		{
			int* arr = getNumbers(num);
			int length = getLength(num);

			for (int i = 0; i < length; i++)
			{
				std::cout << arr[i] << " ";
			}
			std::cout << '\n';
			delete[] arr;
		}
	}
	return 0;
}