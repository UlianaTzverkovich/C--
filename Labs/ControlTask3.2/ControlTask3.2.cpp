// ControlTask3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdlib>
#include <iostream>
#include <cmath>

//преобразует ANSI-строку в ASCII-строку
char* rus(const char st[])
{
	char* st2 = new char[strlen(st) + 2];
	int i = 0;

	while (st[i] != 0)

	{
		unsigned char ch = st[i];
		if ((ch >= 192) && (ch <= 255))
		{
			//буква русского алфавита 
			if (ch < 240)
				st2[i] = st[i] - 64;
			else
				st2[i] = st[i] - 16;
		}
		else

			//остальные символы
			st2[i] = st[i];
		i++;
	}
	st2[i] = 0;
	return st2;
}

int main(int argc, char** argv)
{
	//std::cout << pow(15, 1.0 / 3);
	int i;
	float y, y1;
	float x;

	std::cout << rus("Введите X: ");
	std::cin >> x;
	y = x;
	do {
		y1 = y;
		y = 0.5 * (y + 3 * x / (2 * y * y + x / y));
	} while (abs(y - y1) > 1 / 100000);
	std::cout << "Y = " << y << std::endl;


	return 0;
}


