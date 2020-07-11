#include "library's.h"
#include "worker.h"

using namespace std;


void show(vector<worker>& workers);
void show_if(vector<worker>& workers);
void sort(vector<worker>& workers);
void find(vector<worker>& workers);
void add_new_worker(vector<worker>& workers);
void new_workers(vector<worker>& workers, int n);
void delete_worker(vector<worker>& workers);
void median_and_whole_salary(vector<worker>& workers);

void read_from_database(vector<worker>& workers_from_database, string path, int num);
void write_into_database(vector<worker>& workers, string path);
int find_out_number_of_workers_in_database(string path);
void update_number_of_workers_in_database(string path, int num);

void check_cin();
int alternative_answer();


int main() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//подгружаем базу данныху 
	vector<worker> workers;
	int menu_answer, number_of_workers = find_out_number_of_workers_in_database("number_of_workers_in_database.txt");
	int amount_of_added_workers = 0;
	if (number_of_workers) {
		vector<worker> workers_from_database;
		read_from_database(workers_from_database, "number_of_workers_in_database.txt", number_of_workers);
		auto iter = workers.cbegin();
		workers.insert(iter, workers_from_database.begin(), workers_from_database.end());
	}


	cout << "Добро пожаловать. В текущей базе данных число работников " << number_of_workers << ". Хотите добавить ещё?\n1 — Да\n2 — Нет\n";
	if (alternative_answer() == 1) {
		cout << "Введите число работников: " << endl;
		cin >> amount_of_added_workers;
		if (amount_of_added_workers <= 0 || cin.fail()) {
			cout << "Информация введена неверно" << endl;
			exit(1);
		}
		number_of_workers += amount_of_added_workers;
		new_workers(workers, amount_of_added_workers);
		cout << "Введённые вами работники: " << endl;
		show(workers);
	}

	//главное меню программы
	while (true) {
		cout << "\n\n1 — Показать всех работников\n2 — Показ работников по заданному условию\n3 — Сортировка\n4 — Поиск\n5 — Удаление работника из базы\n6 — Добавление нового работника\n7 — Текущая общая сумма выплат и средний оклад за месяц в отделе\n8 — Выход из программы\n" << endl;
		cin >> menu_answer;
		check_cin();
		if (!number_of_workers && menu_answer != 6) {
			cout << "Ошибка! В базе данных нет ни одного человека. Работа программы невозможна. Введите хотя бы одного сотрудника." << endl;
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
			cout << "Благодарим за использование нашей программы." << endl;
			write_into_database(workers, "database.bin");
			update_number_of_workers_in_database("number_of_workers_in_database.txt", workers.size());
			exit(0);
		default:
			cout << "В меню такого пункта нет!" << endl;
		}
	}
}


//тела функций
void add_new_worker(vector<worker>& workers) {
	worker new_worker;
	string name, surname, fathername, department;
	double salary;
	cout << "Введите последовательно: фамилию, имя, отчество, название отдела, а также зарплату" << endl;
	cin >> surname >> name >> fathername >> department >> salary;
	check_cin();
	new_worker.set_name(name);
	new_worker.set_surname(surname);
	new_worker.set_fathername(fathername);
	new_worker.set_department(department);
	new_worker.set_salary(salary);
	workers.push_back(new_worker);
}

void new_workers(vector<worker>& workers, int n) {
	for (int i = 0; i < n; i++) {
		add_new_worker(workers);
	}
}

void show(vector<worker>& workers) {
	int i = 0;
	for (worker n : workers) {
		cout << ++i << ")";
		cout << "ФИО: " << n.get_surname() << " " << n.get_name() << " " << n.get_fathername() << "\tНазвание отдела: " << n.get_department() << "\tРазмер заработной платы: " << n.get_salary() << endl;
	}	
	cout << endl;
}

void show_if(vector<worker> &workers) {
	double x;
	vector<worker> result;
	cout << "Введите желаемый размер зарплаты в качестве условия" << endl;
	cin >> x;
	check_cin();
	cout << "1)Вывести сотрудников отдела, зарплата которых больше, либо равна введённому значению \n2)Вывести сотрудников отдела, зарплата которых меньше, либо равна введённому значению" << endl;
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
	cout << "Выберите номер работника, которого хотите удалить из базы" << endl;
	cin >> x;
	check_cin();
	if (x > 0 && x <= workers.size()) {
		auto iter1 = workers.begin() + x - 1;
		workers.erase(iter1);
		cout << "Новая версия базы данных выглядит так:" << endl;
		show(workers);
	}
	else {
		cout << "Ошибка ввода!";
		exit(1);
	}
}

void sort(vector<worker>& workers) {
	int answer_1, answer_2;
	cout << "Выберите поле для сортировки:\n1)По имени\n2)По фамилии\n3)По отчеству\n4)По зарплате" << endl;
	cin >> answer_1;
	check_cin();
	cout << "Выберите режим сортировки:\n1)По убыванию\n2)По возрастанию" << endl;
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
		cout << "Неправильный ввод!" << endl;
		exit(1);
	}
}

void find(vector<worker>& workers) {
	int answer;
	cout << "Выберите поле для сортировки:\n1)По имени\n2)По фамилии\n3)По отчеству\n4)По зарплате" << endl;
	cin >> answer;
	check_cin();
	string x;
	double y;
	cout << "Введите нужный параметр" << endl;
	if (answer != 4) {
		cin >> x;
	}
	else {
		cin >> y;
		check_cin();
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
		cout << "Неправильный ввод!" << endl;
		exit(1);
	}
	show(result);
}

void median_and_whole_salary(vector<worker>& workers) {
	double result = accumulate(workers.begin(), workers.end(), 0.0, [](double res, const worker& p1) {
		return res + p1.get_salary();
		});
	cout << "Общая сумма выплат по отделу за месяц равна " << result << endl;
	cout << "Средняя зарплата в отделе равна " << result / workers.size() << endl;
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
		cout << "Не удалось узнать текущее число работников";
		exit(1);
	}
	fin.close();
}

void update_number_of_workers_in_database(string path, int num) {
	ofstream fout;
	fout.open(path);
	if (fout.is_open()) {
		fout << num;
		cout << "Сохранение изменений...\n";
	}
	else {
		cout << "Не удалось обновить информацию!";
	}
	fout.close();
}

void write_into_database(vector<worker>& actual_workers, string path) {
	ofstream file("database.bin", ios::binary | ios::app);
	for (worker n : actual_workers) {
		n.write(file);
	}
	file.close();
}

void read_from_database(vector<worker>& workers_from_database, string path, int num) {
	worker database_worker;
	ifstream file1("database.bin", ios::binary | ios::app);
	for (int i = 0; i < num; i++)
	{
		database_worker.read(file1);
		workers_from_database.push_back(database_worker);
	}
	file1.close();
}

void check_cin() {
	if (cin.fail()) {
		cout << "Информация введена неверно." << endl;
		exit(1);
	}
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
		cout << "Неправильный ввод! В следующий раз вводите числа 1 или 2." << endl;
		exit(1);
	}
}
