#pragma once
#include "Person.h"
#include <string>
using namespace std;

class teacher :
    public Person
{

public:

    void get_data();
    static Person enterTeacher();


private:
    int score;
    string kaf;
};

