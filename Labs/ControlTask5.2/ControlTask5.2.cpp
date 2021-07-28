// ControlTask5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>

int* max_vect(int, int[], int[]);

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 2 };
    int b[] = { 7, 6, 5, 4, 3, 2, 1, 3 };

    int kc = sizeof(a) / sizeof(a[0]);
    int* c;
    c = max_vect(kc, a, b);

    for (int i = 0; i < kc; i++)
    std::cout << c[i] << " ";
    std::cout << std::endl;
    delete[] c;
    return 0;
}

int* max_vect(int kc, int a[], int b[])
{
    int* c = new int[kc];
    for (int i = 0; i < kc; i++)
    {
        if (a[i] > b[i]) c[i] = a[i];
        else c[i] = b[i];
    }
    return c;
}
