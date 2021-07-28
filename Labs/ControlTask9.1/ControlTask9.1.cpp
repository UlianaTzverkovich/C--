// ControlTask9.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <cstdlib>

class Triangle
{
	double a, b, c;


public:
	Triangle(double _a, double _b, double _c) :a{ _a }, b{ _b }, c{ _c }{}

	bool exist()
	{

		return !((a + b) < c || (a + c) < b || (b + c) < a);
	}

	double perimeter()
	{
		if (exist())
		{
			return a + b + c;
		}
		else throw OverLength();
	}

	double square()
	{
		if (exist())
		{
			return (0.25 * sqrt((a + b + c) * (b + c - a) * (a + c - b) * (a + b - c)));
		}
		else throw OverLength();
	}



};

class OverLength
{
public: OverLength() : message("Недопустимая длина")
{ }
	  void printMessage() const
	  {
		  std::cout << message << std::endl;
	  }
private: std::string message;
};



int main()
{

	try
	{
		Triangle tr1{ 3, 4, 5 };
		double per = tr1.perimeter();
		double sq = tr1.square();
		system("pause");
		return 1;
	}
	catch (const OverLength& error)
	{
		std::cout << "Error: ";
		error.printMessage();
		return -1;
	}
}
