// ControlTask3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

double square(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
	int x1 = 2, y1 = 2;
	int x2 = 3, y2 = 3;
	int x3 = 4, y3 = 2;
	int x4 = 3, y4 = 1;
	int x5 = 2, y5 = 0;

	double a1 = distance(x1, y1, x2, y2);
	double b1 = distance(x2, y2, x3, y3);
	double c1 = distance(x3, y3, x1, y1);
	double sq1 = square(a1, b1, c1);
	double a2 = distance(x3, y3, x4, y4);
	double b2 = distance(x4, y4, x5, y5);
	double c2 = distance(x5, y5, x1, y1);
	double sq2 = square(a2, b2, c2);
	double a3 = distance(x1, y1, x3, y3);
	double b3 = distance(x3, y3, x5, y5);
	double c3 = distance(x5, y5, x1, y1);
	double sq3 = square(a3, b3, c3);
	double square = sq1 + sq2 + sq3;

	std::cout << square;

}



