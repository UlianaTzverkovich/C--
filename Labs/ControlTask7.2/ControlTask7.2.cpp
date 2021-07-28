// ControlTask7.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

struct Roots
{
	double root1;
	double root2;
};

Roots quadraticRoots(double a, double b, double c)
{
	Roots roots;
	if ((b * b - 4 * a * c) > 0)//Если дискрименант больше 0
	{
		roots.root1 = ((-b) + sqrt(b * b - 4 * a * c)) / (2 * a);
		roots.root2 = ((-b) - sqrt(b * b - 4 * a * c)) / (2 * a);
	}
	else if ((b * b - 4 * a * c) == 0)////Если дискрименант = 0
	{
		roots.root1 = roots.root2 = -b / (2 * a);
	}
	else
	{
		roots.root1 = roots.root2 = 0;
	}
	return roots;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Roots roots;
	double a, b, c;
	std::cout << "Введите первый коэффициент: ";
	std::cin >> a;
	std::cout << "Введите второй коэффициент: ";
	std::cin >> b;
	std::cout << "Введите третий коэффициент: ";
	std::cin >> c;
	roots = quadraticRoots(a, b, c);
	if (roots.root1 == 0)
	{
		std::cout << "Корней нет." << std::endl;
	}
	else if (roots.root1 == roots.root2 && roots.root1 != 0)
	{
		std::cout << "Корень: " << roots.root1 << std::endl;
	}
	else
	{
		std::cout << "Первый корень: " << roots.root1 << std::endl;
		std::cout << "Второй корень: " << roots.root2 << std::endl;
	}
	return 0;
}

