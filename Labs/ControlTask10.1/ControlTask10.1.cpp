#include "Triangle.h"
#include "Dot.h"

#include <iostream>

int main()
{
    Dot h1 = Dot(4, 4);
    Dot h2 = Dot(-6, -1);
    Dot h3 = Dot(-2, -4);

    Triangle tr = Triangle(h1, h2, h3);

    std::cout << tr.getPerimetor() << std::endl;
    std::cout << tr.getSideLength(h1, h2) << std::endl;
    std::cout << tr.getSquare() << std::endl;
}

