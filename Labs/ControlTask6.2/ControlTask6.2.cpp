// ControlTask6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int n;
    std::ofstream out("array.txt", std::ios::out | std::ios::binary);
    if (!out) {
        std::cout << "Файл открыть невозможно\n";
        return 1;
    }
    std::cout << "Длина массива: ";
    std::cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "array[" << i << "]: ";
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        out << a[i] << " ";
        std::cout << a[i] << " ";
    }
    out << std::endl;
    std::cout << std::endl;
    int min = 0;
    int buf = 0;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            min = (a[j] < a[min]) ? j : min;
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
        out << a[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    out.close();
    return 0;
}


