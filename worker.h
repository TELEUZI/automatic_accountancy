#pragma once
#include <string>
#include <fstream>
#include "libraries.h"

using namespace std;


class worker
{
private:
    string name;
	string surname;
    string fathername;
	string department;
	double salary;
public:
    string get_name()const;
    string get_surname()const;
	string get_fathername()const;
	string get_department()const;
	double get_salary()const;
	void set_name(string);
	void set_surname(string);
	void set_fathername(string);
	void set_department(string);
	void set_salary(double);
	friend ostream& operator<<(ostream& output, const worker& ob);
	friend istream& operator>>(istream& input, worker& ob);
	void write(ostream& os);
	void read(istream& in);
};
