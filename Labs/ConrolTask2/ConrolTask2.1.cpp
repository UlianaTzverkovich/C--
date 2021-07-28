#include <iostream>

int main()
{
    std::cout << "Enter year\n";
    int year;
    std::cin >> year;
    if (year % 4 == 0 && year % 400 == 0 && year % 100 != 0)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }

}
