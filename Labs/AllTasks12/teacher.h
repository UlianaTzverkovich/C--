// teacher.h
#include "human.h"
#include <string>
using namespace std;
class teacher : public human {
	// Конструктор класса teacher
public:
	teacher(
		string last_name,
		string name,
		string second_name,
		// Количество учебных часов за семестр у преподавателя
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}

	teacher() : human() {}

	// Получение количества учебных часов
	unsigned int get_work_time()
	{
		return this->work_time;
	}
	void getdata()
	{
		human::getdata();
		cout << "Введите work time : ";
		cin >> work_time;
	}
	void putdata()
	{
		cout << "\nClass teacher. ";
		human::putdata();
		cout << "\nWork time:" << work_time;
	}
private:
	// Учебные часы
	unsigned int work_time;
};