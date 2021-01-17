#include "worker.h"

using namespace std;

string worker::get_name(void) const {
	return name;
}

string worker::get_surname(void) const {
	return surname;
}

string worker::get_fathername(void) const {
	return fathername;
}

string worker::get_department(void) const {
	return department;
}

double worker::get_salary(void) const {
	return salary;
}

void worker::set_name(string name) {
	this->name = name;
}

void worker::set_surname(string surname) {
	this->surname = surname;
}

void worker::set_fathername(string fathername) {
	this->fathername = fathername;
}

void worker::set_department(string department) {
	this->department = department;
}

void worker::set_salary(double salary) {
	this->salary = salary;
}

ostream& operator<<(ostream& output, const worker& ob)
{
        output << ob.surname << " " << ob.name  << " " << ob.fathername << " " << ob.department  << " " << ob.salary << endl;
	return output;
}

istream& operator>> (istream& input, worker& ob)
{
	string name, surname, fathername, department;
	double salary;
	input >> surname >> name >> fathername >> department >> salary;
	ob.name = name;
	ob.surname = surname;
	ob.fathername = fathername;
	ob.department = department;
	ob.salary = salary;
	return input;
}



