// CinsoleTask6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <fstream>
#include <string>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::string line;
    std::ofstream out("piece of poetry.txt", std::ios::out | std::ios::binary);
    if (!out)
    {
        std::cout << "Файл открыть невозможно!" << std::endl;
        return 1;
    }
    std::cout << "Введите стихотворение или пустую строку, чтобы завершить." << std::endl;
    while (true)
    {
        std::getline(std::cin, line);
        if (line.empty())
            break;
        out << line << std::endl;
    }
    out.close();
    return 0;
}


