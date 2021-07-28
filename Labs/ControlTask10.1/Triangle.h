#pragma once
#include "Dot.h"

class Triangle
{
private:
	//композиция
	Dot h1;
	Dot h2;
	Dot h3;

	//агрегация
	//Dot h1;
	//Dot h2;
	//Dot h3;

public:


	Triangle(const Dot& head1, const Dot& head2, const  Dot& head3);
	~Triangle();

	double getSideLength(Dot& head1, const Dot& head2);
	double getPerimetor();
	double getSquare();
};
