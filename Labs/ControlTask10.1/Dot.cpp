#include "Dot.h"
#include <math.h>
Dot::Dot()
{
	x = 0; y = 0;
}
Dot::Dot(double x, double y)
{
	this->x = x;
	this->y = y;
}
double Dot::distanceTo(const Dot& point)
{
	double r1 = pow((this->x - point.x), 2);
	double r2 = pow((this->y - point.y), 2);
	return sqrt(r1 + r2);
}
