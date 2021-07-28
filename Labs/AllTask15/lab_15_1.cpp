#include <iostream>
#include <windows.h>
#include <string>
#include "student.h"
#include "IdCard.h"
#include "Group.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	string name;
	string last_name;
	IdCard* idc = new IdCard(123456, "�������");
	IdCard* idc2 = new IdCard(654321, "�������");
	//int id;
	//string category;

	// ���� ����� � ����������
	cout << "Name: ";
	getline(cin, name);

	// ���� �������
	cout << "Last name: ";
	getline(cin, last_name);

	//cout << "Category: ";
	//getline(cin, category);
	//idc->setCategory(category);

	//cout << "IdCard :";
	//cin >> id;
	//idc->setNumber(id);

	// �������� ���������� ������������
	Student* student02 = new Student(name, last_name, idc);
	Student* student03 = new Student("����", "������", idc2);
	Student* student04 = new Student("�����", "�������", idc);
	Student* student05 = new Student("����", "����", idc2);
	Student* student06 = new Student("�������", "�����", idc);

	Group gr2021("2021");
	gr2021.addStudent(student02);
	gr2021.addStudent(student03);
	gr2021.addStudent(student04);
	gr2021.addStudent(student05);
	gr2021.addStudent(student06);
	int k = gr2021.getSize();
	//gr2021.delStudent(student04);
	gr2021.delStudent(gr2021.findStudent("�����", "�������"));
	//gr2021.GroupSort();
	cout << "� ������ " << gr2021.getName() << " " << k << " ��." << endl;
	gr2021.GroupOut();
	// ������
	int scores[5];
	// ����� ���� ������
	int sum = 0;

	// ���� ������������� ������ 
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// ������������
		sum += scores[i];
	}

	// ��������� ������������� ������ � ������ ������ Student
	student02->set_scores(scores);

	// ������� ������� ����
	double average_score = sum / 5.0;
	// ��������� ������� ���� � ������ ������ Student
	student02->set_average_score(average_score);

	//IdCard* card = new IdCard(123);
	//student02->setIdCard(*card);

	// ������� ������ �� ��������
	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;

	cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
	cout << "Category: " << student02->getIdCard().getCategory() << endl;

	// �������� ������� student �� ������
	delete student02;
	return 0;
}
