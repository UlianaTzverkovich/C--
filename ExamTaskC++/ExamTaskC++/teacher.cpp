#include "teacher.h"
#include <iostream>

void teacher::get_data()
{
    Person::get_data();
    cout << "Введите кафедру ";
    cin >> kaf;
    cout << "Введите стаж ";
    cin >> score;
    status = "преподаватель";
    prim.append("стаж:");
    prim.append(to_string(score));
    prim.append(",каф.:");
    prim.append(kaf);
};

Person teacher::enterTeacher()
{
    Person* per;
    {
        per = new teacher;
        per->get_data();
        return *per;
    }
}
