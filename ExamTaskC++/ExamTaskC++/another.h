#pragma once
#include "Person.h"
#include <string>
using namespace std;

class another :
    public Person
{
public:

    void get_data();
    static Person enterAnother();

};
