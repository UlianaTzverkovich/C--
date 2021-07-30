#include "student.h"
using namespace std;

void student::get_data()
{
    Person::get_data();
    cout << "Введите факультет ";
    cin >> faculty;
    cout << "Введите средний бал ";
    cin >> score;
    status = "студент";
    prim.append("ср.балл:");
    prim.append(to_string(score));
    prim.append(",фак-т:");
    prim.append(faculty);

};

Person student::enterStud()
{
    Person* per;
    {
        per = new student;
        per->get_data();
        return *per;
    }
}

void student::print_data()
{

    Person::print_data();
    cout << "Студент:";
    cout << "  Факультет" << faculty << "  Оценка:" << score << endl;
};