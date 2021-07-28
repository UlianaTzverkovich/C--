// ControlTask2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <string.h>

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

int main()
{
	std::cout << rus( "Введите количество метаний:") << std::endl;
	unsigned int score = 0;
	int sum = 0;

	for (; sum <= score;)
	{
		std::cout << "X:" << std::endl;
		double x;
		std::cin >> x;
		std::cout << "Y:" << std::endl;
		double y;
		std::cin >> y;
		std::cout << x << "\t" << y << std::endl;
		double r = sqrt(pow(x, 2) + pow(y, 2));

		if (r > 3)
		{
			continue;
		}
		else if (r <= 3 && r > 2)
		{
			sum += 1;
			continue;
		}
		else if (r <= 2 && r > 1)
		{
			sum += 5;
			continue;
		}
		else
		{
			sum += 10;
			continue;
		}
	}
	if (sum >= score - 5 && sum != 0)
	{
		std::cout << rus("Снайпер") << std::endl;
	}

	else if (sum >= score - 15 && sum != 0)
	{
		std::cout << rus ("Просто стрелок") << std::endl;
	}
	else
	{
		std::cout << rus("Новичок") << std::endl;
	}
}
