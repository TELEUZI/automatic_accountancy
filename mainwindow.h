#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "database.h"
#include "strategy.h"
#include "context.h"
#include "QMessageBox"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void load_database();
    void set_table(QTableWidget*,string, string, string, string, double, int, int);
    void set_tables(QTableWidget *z, vector<worker>& result,int number_of_workers);
    void delete_worker();
    void show_if();
    double median_and_whole_salary();
    void add_new_worker(string*,double);
    vector<worker> find(string, int);

    void on_buttonBox_accepted();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_buttonBox_rejected();

private:
    Ui::MainWindow *ui;
    vector<worker> workers;
};
#endif // MAINWINDOW_H
