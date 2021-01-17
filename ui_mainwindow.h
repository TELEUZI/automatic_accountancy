/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *MainMenu;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QWidget *addworker;
    QGridLayout *gridLayout_3;
    QLineEdit *name;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *surname;
    QLineEdit *department;
    QLineEdit *fathername;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLineEdit *salary;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QWidget *delete_worker;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_11;
    QWidget *show_if;
    QGridLayout *gridLayout_5;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_2;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QTableWidget *tableWidget_3;
    QRadioButton *radioButton;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QWidget *find;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit_3;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QTableWidget *tableWidget_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QComboBox *comboBox;
    QWidget *median;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1022, 676);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        MainMenu = new QWidget();
        MainMenu->setObjectName(QStringLiteral("MainMenu"));
        scrollArea = new QScrollArea(MainMenu);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(-10, -10, 1011, 661));
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1011, 661));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   font-weight: 700;\n"
"  color: white;\n"
"\n"
"\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"padding-bottom:5%;\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"\n"
"        margin-top: -5%;\n"
"\n"
"}"));

        gridLayout_2->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   font-weight: 700;\n"
"  color: white;\n"
"\n"
"\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"padding-bottom:5%;\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"\n"
"        margin-top: -5%;\n"
"\n"
"}"));

        gridLayout_2->addWidget(pushButton_3, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   font-weight: 700;\n"
"  color: white;\n"
"\n"
"\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"padding-bottom:5%;\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"\n"
"        margin-top: -5%;\n"
"\n"
"}"));

        gridLayout_2->addWidget(pushButton_2, 0, 4, 1, 1);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   font-weight: 700;\n"
"  color: white;\n"
"\n"
"\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"padding-bottom:5%;\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"\n"
"        margin-top: -5%;\n"
"\n"
"}"));

        gridLayout_2->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   font-weight: 700;\n"
"  color: white;\n"
"\n"
"\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"padding-bottom:5%;\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"\n"
"        margin-top: -5%;\n"
"\n"
"}"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        tableWidget = new QTableWidget(scrollAreaWidgetContents);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QFont font;
        font.setStrikeOut(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setStyleSheet(QStringLiteral(""));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setTextElideMode(Qt::ElideRight);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(false);

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 5);

        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(MainMenu);
        addworker = new QWidget();
        addworker->setObjectName(QStringLiteral("addworker"));
        gridLayout_3 = new QGridLayout(addworker);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        name = new QLineEdit(addworker);
        name->setObjectName(QStringLiteral("name"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(name, 2, 2, 1, 1);

        label_4 = new QLabel(addworker);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 5, 0, 1, 1);

        label_2 = new QLabel(addworker);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);

        label_5 = new QLabel(addworker);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 6, 0, 1, 1);

        surname = new QLineEdit(addworker);
        surname->setObjectName(QStringLiteral("surname"));

        gridLayout_3->addWidget(surname, 3, 2, 1, 1);

        department = new QLineEdit(addworker);
        department->setObjectName(QStringLiteral("department"));

        gridLayout_3->addWidget(department, 5, 2, 1, 1);

        fathername = new QLineEdit(addworker);
        fathername->setObjectName(QStringLiteral("fathername"));

        gridLayout_3->addWidget(fathername, 4, 2, 1, 1);

        buttonBox = new QDialogButtonBox(addworker);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 7, 2, 1, 1);

        label_3 = new QLabel(addworker);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 4, 0, 1, 1);

        salary = new QLineEdit(addworker);
        salary->setObjectName(QStringLiteral("salary"));

        gridLayout_3->addWidget(salary, 6, 2, 1, 1);

        label = new QLabel(addworker);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 1, 1, 1);

        label_6 = new QLabel(addworker);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(10);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_6, 1, 2, 1, 1);

        stackedWidget->addWidget(addworker);
        delete_worker = new QWidget();
        delete_worker->setObjectName(QStringLiteral("delete_worker"));
        gridLayout_4 = new QGridLayout(delete_worker);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_6 = new QPushButton(delete_worker);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_4->addWidget(pushButton_6, 1, 0, 1, 1);

        lineEdit = new QLineEdit(delete_worker);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setClearButtonEnabled(true);

        gridLayout_4->addWidget(lineEdit, 0, 0, 1, 1);

        scrollArea_2 = new QScrollArea(delete_worker);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 98, 28));
        tableWidget_2 = new QTableWidget(scrollAreaWidgetContents_2);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 0, 989, 611));
        sizePolicy.setHeightForWidth(tableWidget_2->sizePolicy().hasHeightForWidth());
        tableWidget_2->setSizePolicy(sizePolicy);
        tableWidget_2->setFrameShape(QFrame::StyledPanel);
        tableWidget_2->setGridStyle(Qt::SolidLine);
        tableWidget_2->horizontalHeader()->setVisible(false);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_2->horizontalHeader()->setStretchLastSection(false);
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_4->addWidget(scrollArea_2, 2, 0, 1, 2);

        pushButton_11 = new QPushButton(delete_worker);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(pushButton_11, 0, 1, 2, 1);

        stackedWidget->addWidget(delete_worker);
        show_if = new QWidget();
        show_if->setObjectName(QStringLiteral("show_if"));
        gridLayout_5 = new QGridLayout(show_if);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        radioButton_2 = new QRadioButton(show_if);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_5->addWidget(radioButton_2, 2, 2, 1, 1);

        lineEdit_2 = new QLineEdit(show_if);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_5->addWidget(lineEdit_2, 0, 0, 1, 1);

        scrollArea_3 = new QScrollArea(show_if);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 98, 28));
        tableWidget_3 = new QTableWidget(scrollAreaWidgetContents_3);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(0, 0, 989, 621));
        sizePolicy.setHeightForWidth(tableWidget_3->sizePolicy().hasHeightForWidth());
        tableWidget_3->setSizePolicy(sizePolicy);
        tableWidget_3->setFrameShape(QFrame::StyledPanel);
        tableWidget_3->setGridStyle(Qt::SolidLine);
        tableWidget_3->horizontalHeader()->setVisible(false);
        tableWidget_3->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_3->horizontalHeader()->setStretchLastSection(false);
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        gridLayout_5->addWidget(scrollArea_3, 3, 0, 1, 4);

        radioButton = new QRadioButton(show_if);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        gridLayout_5->addWidget(radioButton, 0, 2, 1, 1);

        pushButton_8 = new QPushButton(show_if);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_5->addWidget(pushButton_8, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(show_if);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy3.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(pushButton_7, 0, 3, 3, 1);

        stackedWidget->addWidget(show_if);
        find = new QWidget();
        find->setObjectName(QStringLiteral("find"));
        gridLayout_6 = new QGridLayout(find);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        lineEdit_3 = new QLineEdit(find);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_6->addWidget(lineEdit_3, 0, 0, 1, 1);

        scrollArea_4 = new QScrollArea(find);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 98, 28));
        tableWidget_4 = new QTableWidget(scrollAreaWidgetContents_4);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(0, 0, 989, 621));
        sizePolicy.setHeightForWidth(tableWidget_4->sizePolicy().hasHeightForWidth());
        tableWidget_4->setSizePolicy(sizePolicy);
        tableWidget_4->setFrameShape(QFrame::StyledPanel);
        tableWidget_4->setGridStyle(Qt::SolidLine);
        tableWidget_4->horizontalHeader()->setVisible(false);
        tableWidget_4->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_4->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_4->horizontalHeader()->setStretchLastSection(false);
        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        gridLayout_6->addWidget(scrollArea_4, 3, 0, 1, 4);

        pushButton_9 = new QPushButton(find);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout_6->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_10 = new QPushButton(find);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy3.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(pushButton_10, 0, 3, 3, 1);

        comboBox = new QComboBox(find);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy4);

        gridLayout_6->addWidget(comboBox, 0, 2, 2, 1);

        stackedWidget->addWidget(find);
        median = new QWidget();
        median->setObjectName(QStringLiteral("median"));
        stackedWidget->addWidget(median);

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1022, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \320\267\320\260\321\200\320\277\320\273\320\260\321\202\320\260", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\276 \321\203\321\201\320\273\320\276\320\262\320\270\321\216", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\264\320\265\320\273", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260, \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\262\321\213 \321\205\320\276\321\202\320\270\321\202\320\265 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\267 \320\261\320\260\320\267\321\213.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\262 \320\274\320\265\320\275\321\216", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260 \320\274\320\265\320\275\321\214\321\210\320\265, \320\273\320\270\320\261\320\276 \321\200\320\260\320\262\320\275\320\260 \320\262\320\262\320\265\320\264\321\221\320\275\320\275\320\276\320\271", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\265\320\273\320\270\321\207\320\270\320\275\321\203 \320\267\320\260\321\200\320\277\320\273\320\260\321\202\321\213, \321\207\321\202\320\276\320\261\321\213 \320\277\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\276\320\262...", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260 \320\261\320\276\320\273\321\214\321\210\320\265, \320\273\320\270\320\261\320\276 \321\200\320\260\320\262\320\275\320\260 \320\262\320\262\320\265\320\264\321\221\320\275\320\275\320\276\320\271", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\262 \320\274\320\265\320\275\321\216", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200 \320\264\320\273\321\217 \320\277\320\276\320\270\321\201\320\272\320\260 \320\262 \320\262\321\213\320\277\320\260\320\264\320\260\321\216\321\211\320\265\320\274 \320\274\320\265\320\275\321\216 \321\201\320\277\321\200\320\260\320\262\320\260 \320\270 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\262 \320\264\320\260\320\275\320\275\320\276\320\265 \320\277\320\276\320\273\320\265 \320\275\321\203\320\266\320\275\320\276\320\265 \320\222\320\260\320\274 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265.", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\262 \320\274\320\265\320\275\321\216", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\320\230\320\274\321\217", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\320\236\321\202\320\264\320\265\320\273", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
