#include "Database.h"
int Database::find_out_number_of_workers_in_database(string path) {
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

void Database::update_number_of_workers_in_database(string path, int num) {
    ofstream fout;
    fout.open(path);
    if (fout.is_open()) {
        fout << num;
        cout << "���������� ���������...\n";
    }
    else {
        cout << "�� ������� �������� ����������!";
    }
    fout.close();
}

void Database::write_into_database(vector<worker>& actual_workers) {
    ofstream file("database.bin", ios::binary, ios::trunc);
    for (worker n : actual_workers) {
        file << n;
    }
    file.close();
}

void Database::read_from_database(vector<worker>& workers_from_database, int num) {
    worker database_worker;
    ifstream file1("database.bin", ios::binary);
    for (int i = 0; i < num; i++)
    {
        file1 >> database_worker;
        workers_from_database.push_back(database_worker);
    }
    file1.close();
}
