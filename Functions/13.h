#pragma once
#include <iostream>

bool check(bool a, bool b)
{
	if(a&&b)
	{
		return true;
	}
	return false;
}

int main()
{
	bool a, b;
	std::cin >> a >> b;
	std::cout << check(a, b);
	return 0;
}
