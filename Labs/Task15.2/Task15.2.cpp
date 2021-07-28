// Task15.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

map <string, char> StGrade;
string filename = "test.txt";

struct StudentGrade
{
	string name;
	char grade;
};

void inputStud()
{
	StudentGrade st;
	cout << "\nВведите имя: ";
	cin >> st.name;
	cout << "Введите оценку: ";
	cin >> st.grade;
	StGrade[st.name] = st.grade;
}

bool studFind(string name)
{
	if (StGrade.find(name) != StGrade.end())
		return true;
	else
	{
		cout << "В списке нет студента с именем " << name << endl;
		return false;
	}
}

void inputGrade()
{
	string name;
	cout << "Введите фамилию студента\n";
	cin >> name;
	if (studFind(name))
	{
		char grade;
		cout << "Введите оценку: ";
		cin >> grade;
		StGrade[name] = grade;
	}
}


void read_studgradeFromFile(string filename)
{
	ifstream input(filename.c_str());

	string line;
	while (getline(input, line))
	{
		string name, grade;
		istringstream line_input(line);
		line_input >> name >> grade;
		StGrade[name] = grade[0];
	}
}

void writeFile()
{
	ofstream fout;
	fout.open(filename, ios::app);
	for (auto it = StGrade.begin(); it != StGrade.end(); ++it) {
		fout << it->first << " " << it->second << endl;
	}
	fout.close();
}

void printGrade()
{
	cout << "Список оценок студентов: \n";
	for (auto it = StGrade.begin(); it != StGrade.end(); ++it) {
		cout << it->first << " : " << it->second << endl;
	}
}

void menu()
{
	int item;
	while (true)
	{
		cout << "\nВведите 1 для вывода списка \n";
		cout << "Введите 2 для присвоения оценки\n";
		cout << "Введите 3 для ввода студента\n";
		cout << "Введите 4 для завершения\n" << endl;
		cin >> item;
		switch (item)
		{
		case 1:
			read_studgradeFromFile(filename);
			printGrade();
			break;
		case 2:
			inputGrade();
			writeFile();
			break;
		case 3:
			inputStud();
			writeFile();
			break;
		case 4:
			return;
		default:
			cout << "Выберете вариант 1, 2, 3, 4" << endl;
		}
		system("pause");
		system("cls");
	}
};

int main()
{
	system("chcp 1251");
	system("cls");
	read_studgradeFromFile(filename);
	menu();
}




