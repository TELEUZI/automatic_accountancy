#pragma once
#include "worker.h"
class Database
{
private:
	Database() {}
	Database(const Database&);
	Database& operator=(Database&);
public:
	static Database& getInstance() {
		static Database  instance;
		return instance;
	}
    void read_from_database(vector<worker>& workers_from_database, int num);
	void write_into_database(vector<worker>& workers);
	int find_out_number_of_workers_in_database(string path);
	void update_number_of_workers_in_database(string path, int num);
};

