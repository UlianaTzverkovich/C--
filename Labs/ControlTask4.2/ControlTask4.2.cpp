// ControlTask4.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int Input(int& a, int& b)
{
	std::cout << "a:";
	std::cin >> a;
	std::cout << "b:";
	std::cin >> b;
	if ((a == 3 && b > 4) && (a == 3 || b > 4))
		return true;
	else
		return false;
}

int main()
{
	int a, b;
	if (Input(a,b) == false) // if(!Input(a,b))
	{
		std::cerr << "error";
		return 1;
	}
	int s = a + b;
	return 0;
}



