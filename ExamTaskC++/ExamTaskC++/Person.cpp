#include "Person.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void Person::print_data()
{
	cout << setw(12) << left << last_name << setw(12) << name << setw(12) << second_name << address;
};

void Person::get_data()
{
	cout << "\n¬ведите фамилию:";
	cin >> last_name;
	cout << "¬ведите им€:";
	cin >> name;
	cout << "¬ведите отчество:";
	cin >> second_name;
	cout << "¬ведите адрес:";
	cin >> address;
};

void Person::set_data(string surname, string name1, string secname, string addr, string st,
	string pr)

{
	last_name = surname;
	name = name1;
	second_name = secname;
	address = addr;
	status = st;
	prim = pr;
};

string Person::get_FIO()
{
	string FIO;
	FIO.append(last_name);
	FIO.append("_");
	FIO.append(name.substr(0, 1));
	FIO.append(".");
	FIO.append(second_name.substr(0, 1));
	FIO.append(".");
	return FIO;
};



