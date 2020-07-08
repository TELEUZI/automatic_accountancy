#include "worker.h"

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
		output << ob.name << " " << ob.surname  << " " << ob.fathername << " " << ob.department  << " " << ob.salary << endl;
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

void worker::write(ostream& os)
{
	os.write((char*)&salary, sizeof(salary)); 
	string z = name + " " + surname + " " + fathername + " " + department;
	size_t len = z.length() + 1;       
	os.write((char*)&len, sizeof(len)); 
	os.write((char*)z.c_str(), len);
}

void worker::read(istream& in)
{
	in.read((char*)&salary, sizeof(salary));   
	size_t len;                         
	in.read((char*)&len, sizeof(len));  
	char* buf = new char[len];         
	in.read(buf, len);                   
	char* p = strtok(buf, " ");
	for (int i = 0; i < 4; i++)
	{
		if (i == 0) {
			name = p;
			p = strtok(NULL, " ");
		}
		if (i == 1) {
			surname = p;
			p = strtok(NULL, " ");
		}
		if (i == 2) {
			fathername = p;
			p = strtok(NULL, " ");
		}
		if (i == 3) {
			department = p;
			p = strtok(NULL, " ");
		}
	}
	delete[]buf;
};

