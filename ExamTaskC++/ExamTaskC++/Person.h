#pragma once
#include <string>
#include <map>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;


class Person
{

public:
	string name;
	string last_name;
	string second_name;
	string address;
	string status;
	string prim;
	string get_FIO();
	virtual void print_data();
	virtual void get_data();
	virtual void set_data(string, string, string, string, string, string);
};

