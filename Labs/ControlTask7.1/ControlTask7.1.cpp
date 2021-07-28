// ControlTask7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>


struct Time
{
	int EnteredHours;
	int Enteredminutes;
	int EnteredSeconds;

	
	Time Sum(Time t1, Time t2)
	{
		Time totalTime;
		int firstTimeSeconds = t1.EnteredHours * 3600 + t1.Enteredminutes * 60 + t1.EnteredSeconds;
		int secondTimeSeconds = t2.EnteredHours * 3600 + t2.Enteredminutes * 60 + t2.EnteredSeconds;
		int totalSeconds = firstTimeSeconds + secondTimeSeconds;
		totalTime.EnteredHours = totalSeconds / 3600;
		totalSeconds = totalSeconds % 3600;
		totalTime.Enteredminutes = totalSeconds / 60;
		totalSeconds = totalSeconds % 60;
		totalTime.EnteredSeconds = totalSeconds;
		return totalTime;
	}

	

	int ToSeconds()
	{
		int totalSeconds = EnteredHours * 3600 + Enteredminutes * 60 + EnteredSeconds;
		return totalSeconds;
	}

	Time Odds(Time t1, Time t2)
	{
		Time Odds;
		int firstTimeSeconds = t1.EnteredHours * 3600 + t1.Enteredminutes * 60 + t1.EnteredSeconds;
		int secondTimeSeconds = t2.EnteredHours * 3600 + t2.Enteredminutes * 60 + t2.EnteredSeconds;
		int OddsSeconds = abs(firstTimeSeconds - secondTimeSeconds);
		Odds.EnteredHours = OddsSeconds / 3600;
		OddsSeconds = OddsSeconds % 3600;
		Odds.Enteredminutes = OddsSeconds / 60;
		OddsSeconds = OddsSeconds % 60;
		Odds.EnteredSeconds = OddsSeconds;
		return Odds;
	}

	void TimeOut()
	{
		std::cout << EnteredHours << "ч:" << Enteredminutes << "м:" << EnteredSeconds << "с\n";
	}
};

Time AddTime()
{
	Time time;
	std::cout << "Кол-во часов: ";
	std::cin >> time.EnteredHours;
	std::cout << "Кол-во минут: ";
	std::cin >> time.Enteredminutes;
	std::cout << "Кол-во секунд: ";
	std::cin >> time.EnteredSeconds;
	return time;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::cout << "Введите первое время ";
	Time t1 = AddTime();
	std::cout << "I время: ";
	t1.TimeOut();
	std::cout << "В секундах: " << t1.ToSeconds() << std::endl;
	std::cout << "Введите второе время ";
	Time t2 = AddTime();
	std::cout << "II время: ";
	t2.TimeOut();
	Time t3;
	t3 = t3.Sum(t1, t2);
	std::cout << "Сумма времени: ";
	t3.TimeOut();
	Time t4;
	t4 = t4.Odds(t1, t2);
	std::cout << "Разница: ";
	t4.TimeOut();
	return 0;
}




