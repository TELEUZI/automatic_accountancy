#include <algorithm>
#include <numeric>
#include <locale.h>
#include <stdlib.h>
#include <Windows.h>
#include "worker.h"

using namespace std;


int alternative_answer();
void show(vector<worker>& workers);
void show_if(vector<worker>& workers);
void sort(vector<worker>& workers);
void find(vector<worker>& workers);
void add_new_worker(vector<worker>& workers);
void delete_worker(vector<worker>& workers);
void new_workers(vector<worker>& workers, int n);
void read_from_database(vector<worker>& workers_from_database, string path, int num);
void write_into_database(vector<worker>& workers, string path);
int find_out_number_of_workers_in_database(string path);
void update_number_of_workers_in_database(string path, int num);
void median_and_whole_salary(vector<worker>& workers);
void check_cin();

int main() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//���������� ���� ������
	vector<worker> workers;
	int menu_answer, number_of_workers = find_out_number_of_workers_in_database("1.txt");
	int amount_of_added_workers = 0;
	if (number_of_workers) {
		vector<worker> workers_from_database;
		read_from_database(workers_from_database, "1.txt", number_of_workers);
		auto iter = workers.cbegin();
		workers.insert(iter, workers_from_database.begin(), workers_from_database.end());
	}


	cout << "����� ����������. � ������� ���� ������ ����� ���������� " << number_of_workers << ". ������ �������� ���?\n1)��\n2)���\n";
	if (alternative_answer() == 1) {
		cout << "������� ����� ����������: " << endl;
		cin >> amount_of_added_workers;
		if (amount_of_added_workers <= 0 || cin.fail()) {
			cout << "���������� ������� �������" << endl;
			exit(1);
		}
		number_of_workers += amount_of_added_workers;
		new_workers(workers, amount_of_added_workers);
		cout << "�������� ���� ���������: " << endl;
		show(workers);
	}

	//������� ���� ���������
	while (true) {
		cout << "\n\n1)�������� ���� ����������\n2)����� ���������� �� ��������� �������\n3)����������\n4)�����\n5)�������� ��������� �� ����\n6)���������� ������ ���������\n7)������� ����� ����� ������ � ������� ����� �� ����� � ������\n8)����� �� ���������\n" << endl;
		cin >> menu_answer;
		check_cin();
		if (!number_of_workers && menu_answer != 6) {
			cout << "������! � ���� ������ ��� �� ������ ��������. ������ ��������� ����������. ������� ���� �� ������ ����������." << endl;
			menu_answer = 8;
		}
		switch (menu_answer) {
		case 1:
			show(workers); break;
		case 2:
			show_if(workers); break;
		case 3:
			sort(workers); break;
		case 4:
			find(workers); break;
		case 5:
			delete_worker(workers);
			number_of_workers--; break;
		case 6:
			add_new_worker(workers);
			number_of_workers++; break;
		case 7:
			median_and_whole_salary(workers); break;
		case 8:
			cout << "���������� �� ������������� ����� ���������." << endl;
			write_into_database(workers, "file.dat");
			update_number_of_workers_in_database("1.txt", workers.size());
			exit(0);
		default:
			cout << "� ���� ������ ������ ���!" << endl;
		}
	}
}

//���� �������
void check_cin() {
	if (cin.fail()) {
		cout << "���������� ������� �������." << endl;
		exit(1);
	}
}

void add_new_worker(vector<worker>& workers) {
	worker v1;
	string name, surname, fathername, department;
	double salary;
	cout << "������� ���������������: �������, ���, ��������, �������� ������, � ����� ��������" << endl;
	cin >> surname >> name >> fathername >> department >> salary;
	if (cin.fail())
	{
		cout << "�������� ����! � ��������� ��� ������ ����������." << endl;
		exit(1);
	}
	v1.set_name(name);
	v1.set_surname(surname);
	v1.set_fathername(fathername);
	v1.set_department(department);
	v1.set_salary(salary);
	workers.push_back(v1);
}

void show(vector<worker>& workers) {
	int i = 0;
	for (worker n : workers) {
		cout << ++i << ")";
		cout << "���: " << n.get_surname() << " " << n.get_name() << " " << n.get_fathername() << "\t�������� ������: " << n.get_department() << "\t������ ���������� �����: " << n.get_salary() << endl;
	}
		
	cout << endl;
}

void show_if(vector<worker> &workers) {
	double x;
	vector<worker> result;
	cout << "������� �������� ������ �������� � �������� �������" << endl;
	cin >> x;
	check_cin();
	cout << "1)������� ����������� ������, �������� ������� ������, ���� ����� ��������� �������� \n2)������� ����������� ������, �������� ������� ������, ���� ����� ��������� ��������" << endl;
	int answer = alternative_answer();
	copy_if(workers.begin(), workers.end(), back_inserter(result), [&x, &answer](const worker &p1) {
		if (answer == 1) {
			return (p1.get_salary() >= x);
		}
		else {
			return (p1.get_salary() <= x);
		}
		});
	show(result);
}

void delete_worker(vector<worker>& workers) {
	int x;
	show(workers);
	cout << "�������� ����� ���������, �������� ������ ������� �� ����" << endl;
	cin >> x;
	if (x > 0 && x <= workers.size()) {
		auto iter1 = workers.begin() + x - 1;
		workers.erase(iter1);
		cout << "����� ������ ���� ������ �������� ���:" << endl;
		show(workers);
	}
	else {
		cout << "������ �����!";
		exit(1);
	}
}

void sort(vector<worker>& workers) {
	int answer_1, answer_2;
	cout << "�������� ���� ��� ����������:\n1)�� �����\n2)�� �������\n3)�� ��������\n4)�� ��������" << endl;
	cin >> answer_1;
	check_cin();
	cout << "�������� ����� ����������:\n1)�� ��������\n2)�� �����������" << endl;
	answer_2 = alternative_answer();
	switch (answer_1)
	{
	case 1: sort(workers.begin(), workers.end(), [&answer_2](const worker& p1, const worker& p2) {
		if (answer_2 == 1) {
			return p1.get_name() > p2.get_name();
		}
		else {
			return p1.get_name() < p2.get_name();
		}
		}); break;

	case 2: sort(workers.begin(), workers.end(), [&answer_2](const worker& p1, const worker& p2) {
		if (answer_2 == 1) {
			return p1.get_surname() > p2.get_surname();
		}
		else {
			return p1.get_surname() < p2.get_surname();
		}
		}); break;

	case 3: sort(workers.begin(), workers.end(), [&answer_2](const worker& p1, const worker& p2) {
		if (answer_2 == 1) {
			return p1.get_fathername() > p2.get_fathername();
		}
		else {
			return p1.get_fathername() < p2.get_fathername();
		}
		}); break;

	case 4: sort(workers.begin(), workers.end(), [&answer_2](const worker& p1, const worker& p2) {
		if (answer_2 == 1) {
			return p1.get_salary() > p2.get_salary();
		}
		else {
			return p1.get_salary() < p2.get_salary();
		}
		}); break;

	default:
		cout << "������������ ����!" << endl;
		exit(1);
	}
}

void find(vector<worker>& workers) {
	int answer;
	cout << "�������� ���� ��� ����������:\n1)�� �����\n2)�� �������\n3)�� ��������\n4)�� ��������" << endl;
	cin >> answer;
	check_cin();
	string x;
	double y;
	cout << "������� ������ ��������" << endl;
	if (answer != 4) {
		cin >> x;
	}
	else {
		cin >> y;
	}
	vector<worker> result;
	switch (answer)
	{
	case 1:
		copy_if(workers.begin(), workers.end(), back_inserter(result), [&x](const worker& p) {
			return (p.get_name() == x);
			}); break;
	case 2:
		copy_if(workers.begin(), workers.end(), back_inserter(result), [&x](const worker& p) {
			return (p.get_surname() == x);
			}); break;
	case 3: 
		copy_if(workers.begin(), workers.end(), back_inserter(result), [&x](const worker& p) {
			return (p.get_fathername() == x);
			}); break;
	case 4:
		copy_if(workers.begin(), workers.end(), back_inserter(result), [&y](const worker& p) {
			return (p.get_salary() == y);
			}); break;
	default:
		cout << "������������ ����!" << endl;
		exit(1);
	}
	show(result);
}

int alternative_answer() {
	int answer;
	cin >> answer;
	if (answer == 1) {
		return 1;
	}
	else if (answer == 2) {
		return 2;
	}
	else {
		cout << "������������ ����! � ��������� ��� ������� ����� 1 ��� 2." << endl;
		exit(1);
	}
}

void new_workers(vector<worker>& workers, int n) { //���� ������ ��� ���������� ����������
	for (int i = 0; i < n; i++) {
		add_new_worker(workers);
	}
}

int find_out_number_of_workers_in_database(string path) {
	ifstream fin;
	fin.open(path);
	if (fin.is_open()) {
		string str;
		getline(fin, str);
		return atoi(str.c_str());
	}
	else {
		cout << "�� ������� ������ ������� ����� ����������";
		exit(1);
	}
	fin.close();
}

void update_number_of_workers_in_database(string path, int num) {
	ofstream fout;
	fout.open("1.txt");
	if (fout.is_open()) {
		fout << num;
		cout << "���������� ���������...\n";
	}
	else {
		cout << "�� ������� �������� ����������!";
	}
	fout.close();
}

void write_into_database(vector<worker>& actual_workers, string path) {
	ofstream file("file.bin", ios::binary | ios::app);
	for (worker n : actual_workers) {
		n.write(file);
	}
	file.close();
}

void read_from_database(vector<worker>& workers_from_database, string path, int num) {
	worker v3;
	ifstream file1("file.bin", ios::binary | ios::app);
	for (size_t i = 0; i < num; i++)
	{
		v3.read(file1);
		workers_from_database.push_back(v3);
	}
	file1.close();
}

void median_and_whole_salary(vector<worker>& workers) {
	double result = accumulate(workers.begin(), workers.end(), 0.0, [](double res, const worker& p1) {
		return res + p1.get_salary();
		});
	cout << "����� ����� ������ �� ������ �� ����� ����� " << result << endl;
	cout << "������� �������� � ������ ����� " << result / workers.size() << endl;
}

