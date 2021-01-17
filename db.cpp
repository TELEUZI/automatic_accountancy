#include "db.h"
#include <QDebug>
#include <QSqlRecord>
using namespace std;
void DB::load_db(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dump.sqlite");
    db.open();
    query = QSqlQuery();

}
int DB::find_out_number_of_workers_in_database()
{
    load_db();
    query.exec("SELECT COUNT(rowid)FROM WORKERS");
    query.first();
    int num = query.value(0).toInt();
    return num;
}
void DB::read_from_database(vector<worker>& workers_from_database){
    worker database_worker;
    query.exec("SELECT * FROM WORKERS");
    query.first();
    while (query.isValid()){
        database_worker.set_surname(query.value(0).toString().toStdString());
        database_worker.set_name(query.value(1).toString().toStdString());
        database_worker.set_fathername(query.value(2).toString().toStdString());
        database_worker.set_department(query.value(3).toString().toStdString());
        database_worker.set_salary(query.value(4).toDouble());
        workers_from_database.push_back(database_worker);
        query.next();
}
}
void DB::write_into_database(vector<worker>& workers){
    worker database_worker;

    query.exec("DELETE FROM WORKERS");
    query.prepare("INSERT into WORKERS values (?,?,?,?,?)");

    for (int i = 0; i< workers.size();i++){
    query.bindValue(0, QVariant(QString::fromStdString(workers[i].get_surname())));
    query.bindValue(1, QVariant(QString::fromStdString(workers[i].get_name())));
    query.bindValue(2, QVariant(QString::fromStdString(workers[i].get_fathername())));
    query.bindValue(3, QVariant(QString::fromStdString(workers[i].get_department())));
    query.bindValue(4, QVariant(workers[i].get_salary()));
    query.exec();
    qDebug() << "sas";
    }
}
