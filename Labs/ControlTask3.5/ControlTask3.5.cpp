// ControlTask3.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void toBinary(int n) {
    if (n < 0) {
        std::cout << "-";
        toBinary(-n);
    }
    else if (n < 2) {
        std::cout << n;
        return;
    }
    else {
        toBinary(n / 2);
        int res = n % 2;
        std::cout << res;
    }
}

//преобразует ANSI-строку в ASCII-строку
char* rus(const char st[])
{
	char* st2 = new char[strlen(st) + 2];
	int i = 0;

	while (st[i] != 0)

	{
		unsigned char ch = st[i];
		if ((ch >= 192) && (ch <= 255))
		{
			//буква русского алфавита 
			if (ch < 240)
				st2[i] = st[i] - 64;
			else
				st2[i] = st[i] - 16;
		}
		else

			//остальные символы
			st2[i] = st[i];
		i++;
	}
	st2[i] = 0;
	return st2;
}

int main() {
    int n;
    std::cout << rus("Введите целое число:\n");
    std::cin >> n;
    std::cout << rus("Двоичный вид числа:\n");
    toBinary(n);
    std::cout << std::endl;
    return 0;
}


