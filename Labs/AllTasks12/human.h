// human.h
#include <string>
#include <sstream>
#include <iostream>
#pragma once /* ������ �� �������� ����������� ������������� ����� */
using namespace std;
class human {
public:
	// ����������� ������ human
	human(string last_name, string name, string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}

	human() {}

	// ��������� ��� ��������
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
		cout << "\n������� Last name : ";
		cin >> last_name;
		cout << "������� Name : ";
		cin >> name;
		cout << "������� Second name : ";
		cin >> second_name;
	}
	virtual void putdata()
	{
		cout << "\nLast name: " << last_name;
		cout << "\nName:" << name;
		cout << "\nSecond name:" << second_name;
	}
private:
	string name; // ���
	string last_name; // �������
	string second_name; // ��������
};