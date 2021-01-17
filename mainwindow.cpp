#include "mainwindow.h"

using namespace std;
DB& db1 = DB::getInstance();
int number_of_workers = db1.find_out_number_of_workers_in_database();
int added = 0;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    load_database();
    set_tables(ui->tableWidget, this->workers, number_of_workers);
    ui->tableWidget->setSortingEnabled(1);
    ui->stackedWidget->setCurrentIndex(0);
    this->setWindowTitle("Бухгалтерский учёт");
    QIcon icon("app.ico");
    this->setWindowIcon(icon);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::load_database(){
    if (number_of_workers) {
            vector<worker> workers_from_database;
            db1.read_from_database(workers_from_database);
            auto iter = this->workers.cbegin();
            this->workers.insert(iter, workers_from_database.begin(), workers_from_database.end());
        }
}

void MainWindow::set_table(QTableWidget *z, string surname, string name, string fathername, string department, double salary, int iter, int number_of_workers){
   z->setRowCount(number_of_workers);
   z->setColumnCount(5);
   z->setHorizontalHeaderLabels(QStringList() << "Фамилия" << "Имя" << "Отчество" << "Отдел" << "Зарплата");
   z->horizontalHeader()->setVisible(1);
   string worker_info[4] = { surname, name, fathername, department};
   QString str;
   QTableWidgetItem *item;
    for (int i = 0; i < number_of_workers; i++){
        for (int j = 0; j < 5; j++){
            if (j!=4){
            str = QString::fromStdString(worker_info[j]);
            item = new QTableWidgetItem(str);}
            else{
               item = new QTableWidgetItem();
               item->setData(Qt::EditRole, salary);
            }
            z->setItem(iter, j, item);
        }
    }
}

void MainWindow::set_tables(QTableWidget *z, vector<worker>& result, int number_of_workers){
    for (int i = 0; i < number_of_workers; i++){
        set_table(z, result[i].get_surname(), result[i].get_name(), result[i].get_fathername(),
                 result[i].get_department(), result[i].get_salary(), i, number_of_workers);
        }
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}
void MainWindow::add_new_worker(string* worker_info, double salary){
    worker new_worker;
    new_worker.set_name(worker_info[0]);
    new_worker.set_surname(worker_info[1]);
    new_worker.set_fathername(worker_info[2]);
    new_worker.set_department(worker_info[3]);
    new_worker.set_salary(ui->salary->text().toDouble());
    this->workers.push_back(new_worker);
    db1.write_into_database(this->workers);
}
void MainWindow::on_buttonBox_accepted()
{
    ui->tableWidget->setSortingEnabled(0);
    ui->tableWidget->setRowCount(++number_of_workers);
    ++added;
    string worker_info[4] = { ui->name->text().toStdString(), ui->surname->text().toStdString(), ui->fathername->text().toStdString(), ui->department->text().toStdString()};
    add_new_worker(worker_info, ui->salary->text().toDouble());
    set_table(ui->tableWidget,
              ui->surname->text().toStdString(),
              ui->name->text().toStdString(),
              ui->fathername->text().toStdString(),
              ui->department->text().toStdString(),
              ui->salary->text().toDouble(),
              number_of_workers-1,
              number_of_workers);

    ui->stackedWidget->setCurrentIndex(0);
    ui->tableWidget->setSortingEnabled(1);
    ui->name->clear();
    ui->surname->clear();
    ui->fathername->clear();
    ui->department->clear();
    ui->salary->clear();
}


void MainWindow::on_pushButton_4_clicked()
{
    set_tables(ui->tableWidget_2, this->workers, number_of_workers);
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::delete_worker() {
    int x;
    x = ui->lineEdit->text().toInt();
    if (x > 0 && x <= this->workers.size()) {
        auto iter1 = workers.begin() + x - 1;
        workers.erase(iter1);
        db1.write_into_database(this->workers);
        set_tables(ui->tableWidget, this->workers, --number_of_workers);
    }
    else {
        QMessageBox::information(this, "Внимание", "Такого работника не существует.");
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->tableWidget->setSortingEnabled(0);
    delete_worker();
    ui->lineEdit->clear();
    ui->tableWidget->setSortingEnabled(1);
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::show_if() {

    double x;
    x = ui->lineEdit_2->text().toDouble();
    Context* context;
    if (ui->radioButton->isChecked()) {
        context = new Context(new StrategySalaryHigher);
    }
    else {
        context = new Context(new StrategySalaryLower);
    }
    vector<worker> work;
    work = context->show_if(this->workers, x);
    int size_of_vector = work.size();
    if (size_of_vector){
        set_tables(ui->tableWidget_3, work, size_of_vector);
    }
    else{
        QMessageBox::warning(this, "Внимание","Не найдено ни одного сотрудника!");
        ui->tableWidget_3->setRowCount(0);
        ui->tableWidget_3->setColumnCount(0);
    }

    delete context;
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->tableWidget_3->clearContents();
    ui->tableWidget_3->setRowCount(0);
    ui->tableWidget_3->setColumnCount(0);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_8_clicked()
{
    show_if();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->tableWidget_4->clearContents();
    ui->tableWidget_4->setRowCount(0);
    ui->tableWidget_4->setColumnCount(0);
}

void MainWindow::on_pushButton_9_clicked()
{
    vector<worker> result;
    result = find(ui->lineEdit_3->text().toStdString(), ui->comboBox->currentIndex());
    int size_of_vector = result.size();
    ui->tableWidget_4->setRowCount(size_of_vector);
    set_tables(ui->tableWidget_4, result, size_of_vector);


}
vector<worker> MainWindow::find(string x, int answer){
    vector<worker> result;
    copy_if(this->workers.begin(), this->workers.end(), back_inserter(result), [&x, &answer](const worker& p) {
        switch (answer) {
        case 1:
            return (p.get_name() == x); break;
        case 0:
            return (p.get_surname() == x); break;
        case 2:
            return (p.get_fathername() == x); break;
        case 3:
            return (p.get_department() == x); break;
        }});
    return result;
}
void MainWindow::on_pushButton_2_clicked()
{

    double result = average_and_whole_salary();
    QString str = QString("Общая зарплата отделов равна %0, средняя зарплата отделов равна %1").arg(result).arg(result/number_of_workers);
    QMessageBox::information(this, "Общая и средняя зарплата",str);

}
double MainWindow::average_and_whole_salary(){
    return accumulate(workers.begin(), workers.end(), 0.0, [](double res, const worker& p1) {
                return res + p1.get_salary();
                });

}
void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEdit->clear();

}

void MainWindow::on_buttonBox_rejected()
{
    ui->stackedWidget->setCurrentIndex(0);
}
