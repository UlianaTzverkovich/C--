#include "another.h"
#include "teacher.h"
#include <iostream>

void another::get_data()
{
    Person::get_data();
    status = "др.служащий";
    cout << "Введите примечание ";
    cin >> prim;
};

Person another::enterAnother()
{
    Person* per;
    {
        per = new another;
        per->get_data();
        return *per;
    }
}
