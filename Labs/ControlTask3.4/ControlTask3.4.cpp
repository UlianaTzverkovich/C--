// ControlTask3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int range(int n)
{
	if (n == 0 || n < 0)
	{
		return 0;
	}

	return 5 * n + range(n - 1);
}
int main()
{
	std::cout << range(2);
}

