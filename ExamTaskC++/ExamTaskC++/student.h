#pragma once
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

class student :
    public Person
{

public:

    void get_data();
    static Person enterStud();
    void print_data();

private:
    int score;
    string faculty;
};

