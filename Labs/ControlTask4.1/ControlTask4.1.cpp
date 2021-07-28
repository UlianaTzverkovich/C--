// ControlTask4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>

int Myroot(double, double, double, double&, double&);
int Myroot2(double, double, double, double&, double&);

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

int main()
{
	double a, b, c;
	double root1, root2;
	std::cout << rus("Введите первый множитель") << std::endl;
	std::cin >> a;
	std::cout << rus("Введите второй множитель") << std::endl;
	std::cin >> b;
	std::cout << rus("Введите третий множитель") << std::endl;
	std::cin >> c;

	if (Myroot(a, b, c, root1, root2))
	{
		if (root2 != root1)
		{
			std::cout << rus("Первый корень = ") << root1 << std::endl;
			std::cout << rus("Второй корень = ") << root2 << std::endl;

		}
		else
		{
			std::cout << rus("Корни = ") << root1 << std::endl;
		}
	}
	
	if (!Myroot2(a, b, c, root1, root2))
	{
		std::cout << rus("Корни = ") << root1 << std::endl;
	}
	else if (Myroot2(a, b, c, root1, root2) == 1)
	{
		std::cout << rus("Первый корень = ") << root1 << std::endl;
		std::cout << rus("Второй корень = ") << root2 << std::endl;
	}

	else if (Myroot2(a, b, c, root1, root2) == -1)
	{
		std::cout << rus("Нет корней") << std::endl;
	}

	else
	{
		std::cout << "Ошибка" << std::endl;
	}
}

int Myroot(double a, double b, double c, double& root1, double& root2)
{
	if ((b * b - 4 * a * c) > 0)
	{
		root1 = ((-b) + sqrt(b * b - 4 * a * c)) / (2 * a);
		root2 = ((-b) - sqrt(b * b - 4 * a * c)) / (2 * a);
		return 1;
	}
	else if ((b * b - 4 * a * c) == 0)
	{
		root1 = -b / (2 * a);
		root2 = root1;
		//return 0;
		return -1;
	}
	else
	{
		//return -1;
		return 0;
	}
}
int Myroot2(double a, double b, double c, double& root1, double& root2)
{
	if ((b * b - 4 * a * c) > 0)
	{
		root1 = ((-b) + sqrt(b * b - 4 * a * c)) / (2 * a);
		root2 = ((-b) - sqrt(b * b - 4 * a * c)) / (2 * a);
		return 1;
	}
	else if ((b * b - 4 * a * c) == 0)
	{
		root1 = -b / (2 * a);
		root2 = root1;
		return 0;

	}
	else
	{
		return -1;

	}
}



