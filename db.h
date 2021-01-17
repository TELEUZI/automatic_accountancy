#ifndef DB_H
#define DB_H
#include "worker.h"
#include "QMessageBox"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QVariant>

class DB
{
private:
    DB() {}
    DB(const DB&);
    DB& operator=(DB&);
    QSqlDatabase db;
    QSqlQuery query;
public:
    static DB& getInstance() {
        static DB  instance;
        return instance;
    }
    void load_db();
    int find_out_number_of_workers_in_database();
    void read_from_database(vector<worker>& workers_from_database);
    void write_into_database(vector<worker>& workers);


};
#endif
