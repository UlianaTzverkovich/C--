#include <iostream>

int main()
{
    std::cout << "Enter 3 numbers\n";
    int a, b, c, max;
    std::cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (a <= b && b >= c)
    {
        max = b;
    }
    else
        max = c;

    std::cout << "Maximum: " << max;

}
