// ControlTask1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    double s = 0;
    int n = 5;

    int* x = new int[n];
    int* y = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i + 1 << "]=";
        cin >> x[i];
        cout << "y[" << i + 1 << "]=";
        cin >> y[i];
    }

    for (int i = 0; i < (n - 1); i++)
    {
        s += (x[i] + x[i + 1]) * (y[i] - y[i + 1]);
    }

    cout << "square: " << abs(s) / 2;
    delete[] x;
    delete[] y;
}