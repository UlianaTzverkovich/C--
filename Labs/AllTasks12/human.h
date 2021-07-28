// human.h
#include <string>
#include <sstream>
#include <iostream>
#pragma once /* Защита от двойного подключения заголовочного файла */
using namespace std;
class human {
public:
	// Конструктор класса human
	human(string last_name, string name, string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}

	human() {}

	// Получение ФИО человека
	string get_full_name()
	{
		ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	virtual void getdata()
	{
		cout << "\nВведите Last name : ";
		cin >> last_name;
		cout << "Введите Name : ";
		cin >> name;
		cout << "Введите Second name : ";
		cin >> second_name;
	}
	virtual void putdata()
	{
		cout << "\nLast name: " << last_name;
		cout << "\nName:" << name;
		cout << "\nSecond name:" << second_name;
	}
private:
	string name; // имя
	string last_name; // фамилия
	string second_name; // отчество
};