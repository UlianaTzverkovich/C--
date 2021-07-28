// ControlTask3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

double square(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main(int argc, char** argv)
{
	int Number = 0;

	std::cout << rus("Введите 1 чтобы рассчитать площадь разностароннего треугольника") << std::endl;
	std::cout << rus("Введите 2 чтобы рассчитать площадь равностороннего треугольника") << std::endl;
	std::cin >> Number;

	while (Number != 3)
	{
		

		if (Number == 1)
		{
			int a, b, c;
			std::cout << rus("Введите длины сторон треугольника") << std::endl;
			std::cin >> a >> b >> c;
			std::cout << square(a, b, c);
		}

		else if (Number == 2)
		{
			int a;
			std::cout << rus("Введите длины сторон треугольника") << std::endl;
			std::cin >> a;
			std::cout << square(a, a, a);
		}


		
	};


	return 0;
}


