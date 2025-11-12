/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *moneytab;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_4;
    QFrame *wagesFrame;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *txtFirstNum_3;
    QLineEdit *lineEdit_5;
    QLabel *label_9;
    QDateEdit *dateEdit_2;
    QDateEdit *dateEdit_3;
    QWidget *expenseTab;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QFrame *wagesFrame_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *txtFirstNum_2;
    QLabel *label_6;
    QComboBox *comboBox;
    QDateEdit *dateEdit;
    QWidget *budgetTab;
    QFrame *frame;
    QChartView *chartView;
    QTableWidget *tableBudget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1308, 839);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/pink_pig.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: #ECEEF1;\n"
"color: #1E1E1E;"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 0, 1291, 811));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    border: none;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: #F5F6F8;\n"
"    color: #1E1E1E;\n"
"    padding: 8px 16px;\n"
"    border-top-left-radius: 6px;\n"
"    border-top-right-radius: 6px;\n"
"    margin-right: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: #E5E7EB;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #D1D5DB;     /* Darker active tab */\n"
"    color: #111827;\n"
"    font-weight: 600;\n"
"}"));
        moneytab = new QWidget();
        moneytab->setObjectName("moneytab");
        tableWidget_2 = new QTableWidget(moneytab);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(270, 50, 301, 191));
        tableWidget_2->setAlternatingRowColors(true);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget_2->setGridStyle(Qt::PenStyle::SolidLine);
        pushButton_4 = new QPushButton(moneytab);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(270, 260, 131, 41));
        QFont font;
        font.setBold(true);
        pushButton_4->setFont(font);
        pushButton_4->setMouseTracking(false);
        wagesFrame = new QFrame(moneytab);
        wagesFrame->setObjectName("wagesFrame");
        wagesFrame->setGeometry(QRect(10, 30, 591, 291));
        wagesFrame->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"border-radius: 8px;\n"
"border: 1px solid #D0D3D8;"));
        wagesFrame->setFrameShape(QFrame::Shape::StyledPanel);
        wagesFrame->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_3 = new QPushButton(wagesFrame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 190, 71, 31));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #D0D3D8;\n"
"    border-radius: 6px;\n"
"    padding: 6px 14px;\n"
"    color: #1E1E1E;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 1px solid #3B82F6;\n"
"    background-color: #F0F7FF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0ECFF;\n"
"}"));
        label = new QLabel(wagesFrame);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 171, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    background: transparent;\n"
"}"));
        label->setFrameShape(QFrame::Shape::NoFrame);
        label->setFrameShadow(QFrame::Shadow::Plain);
        label_8 = new QLabel(wagesFrame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 110, 71, 31));
        txtFirstNum_3 = new QLineEdit(wagesFrame);
        txtFirstNum_3->setObjectName("txtFirstNum_3");
        txtFirstNum_3->setGeometry(QRect(100, 70, 151, 31));
        txtFirstNum_3->setStyleSheet(QString::fromUtf8("background-color: #ECEEF1;\n"
"color: #1E1E1E;"));
        txtFirstNum_3->setFrame(true);
        txtFirstNum_3->setEchoMode(QLineEdit::EchoMode::Normal);
        txtFirstNum_3->setClearButtonEnabled(false);
        lineEdit_5 = new QLineEdit(wagesFrame);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEnabled(true);
        lineEdit_5->setGeometry(QRect(100, 110, 151, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: #ECEEF1;\n"
"color: #1E1E1E;"));
        lineEdit_5->setReadOnly(false);
        label_9 = new QLabel(wagesFrame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 70, 71, 31));
        dateEdit_2 = new QDateEdit(wagesFrame);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(150, 290, 221, 31));
        dateEdit_2->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"color: #1E1E1E;"));
        dateEdit_2->setCalendarPopup(true);
        dateEdit_3 = new QDateEdit(wagesFrame);
        dateEdit_3->setObjectName("dateEdit_3");
        dateEdit_3->setGeometry(QRect(30, 150, 221, 31));
        dateEdit_3->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"color: #1E1E1E;"));
        dateEdit_3->setDateTime(QDateTime(QDate(2025, 1, 1), QTime(0, 0, 0)));
        dateEdit_3->setMaximumDateTime(QDateTime(QDate(9999, 11, 30), QTime(23, 59, 59)));
        dateEdit_3->setCalendarPopup(true);
        label->raise();
        label_8->raise();
        txtFirstNum_3->raise();
        lineEdit_5->raise();
        label_9->raise();
        pushButton_3->raise();
        dateEdit_2->raise();
        dateEdit_3->raise();
        tabWidget->addTab(moneytab, QString());
        wagesFrame->raise();
        tableWidget_2->raise();
        pushButton_4->raise();
        expenseTab = new QWidget();
        expenseTab->setObjectName("expenseTab");
        pushButton_2 = new QPushButton(expenseTab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 360, 121, 41));
        pushButton_2->setFont(font);
        tableWidget = new QTableWidget(expenseTab);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(270, 40, 301, 311));
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget->setColumnCount(3);
        wagesFrame_2 = new QFrame(expenseTab);
        wagesFrame_2->setObjectName("wagesFrame_2");
        wagesFrame_2->setGeometry(QRect(10, 20, 591, 411));
        wagesFrame_2->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"border-radius: 8px;\n"
"border: 1px solid #D0D3D8;"));
        wagesFrame_2->setFrameShape(QFrame::Shape::StyledPanel);
        wagesFrame_2->setFrameShadow(QFrame::Shadow::Raised);
        pushButton = new QPushButton(wagesFrame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 230, 101, 31));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #D0D3D8;\n"
"    border-radius: 6px;\n"
"    padding: 6px 14px;\n"
"    color: #1E1E1E;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 1px solid #3B82F6;\n"
"    background-color: #F0F7FF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0ECFF;\n"
"}"));
        lineEdit_4 = new QLineEdit(wagesFrame_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEnabled(true);
        lineEdit_4->setGeometry(QRect(100, 110, 151, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: #ECEEF1;\n"
"color: #1E1E1E;"));
        lineEdit_4->setReadOnly(false);
        label_5 = new QLabel(wagesFrame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 110, 71, 31));
        label_4 = new QLabel(wagesFrame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 70, 71, 31));
        txtFirstNum_2 = new QLineEdit(wagesFrame_2);
        txtFirstNum_2->setObjectName("txtFirstNum_2");
        txtFirstNum_2->setGeometry(QRect(100, 70, 151, 31));
        txtFirstNum_2->setStyleSheet(QString::fromUtf8("background-color: #ECEEF1;\n"
"color: #1E1E1E;"));
        txtFirstNum_2->setFrame(true);
        txtFirstNum_2->setEchoMode(QLineEdit::EchoMode::Normal);
        txtFirstNum_2->setClearButtonEnabled(false);
        label_6 = new QLabel(wagesFrame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 20, 221, 41));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    background: transparent;\n"
"}"));
        comboBox = new QComboBox(wagesFrame_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(30, 190, 221, 31));
        comboBox->setStyleSheet(QString::fromUtf8(""));
        dateEdit = new QDateEdit(wagesFrame_2);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(30, 150, 221, 31));
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"color: #1E1E1E;"));
        dateEdit->setDateTime(QDateTime(QDate(2025, 1, 2), QTime(0, 0, 0)));
        dateEdit->setCalendarPopup(true);
        tabWidget->addTab(expenseTab, QString());
        wagesFrame_2->raise();
        pushButton_2->raise();
        tableWidget->raise();
        budgetTab = new QWidget();
        budgetTab->setObjectName("budgetTab");
        frame = new QFrame(budgetTab);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(19, -1, 1151, 751));
        frame->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"border-radius: 8px;\n"
"border: 1px solid #D0D3D8;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        chartView = new QChartView(frame);
        chartView->setObjectName("chartView");
        chartView->setGeometry(QRect(570, 20, 561, 711));
        sizePolicy.setHeightForWidth(chartView->sizePolicy().hasHeightForWidth());
        chartView->setSizePolicy(sizePolicy);
        chartView->setMaximumSize(QSize(16777215, 16777215));
        chartView->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"border: 0px solid #D0D3D8;"));
        tableBudget = new QTableWidget(frame);
        if (tableBudget->columnCount() < 3)
            tableBudget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableBudget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableBudget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableBudget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableBudget->setObjectName("tableBudget");
        tableBudget->setGeometry(QRect(20, 20, 521, 711));
        tableBudget->setStyleSheet(QString::fromUtf8("background-color: #ECEEF1;\n"
"color: #1E1E1E;\n"
"border-radius: 0px;\n"
"border: 0px solid #D0D3D8;"));
        tableBudget->setFrameShadow(QFrame::Shadow::Sunken);
        tabWidget->addTab(budgetTab, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        pushButton_4->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Delete Selected", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "  Monthly Pay:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", " Amount:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "  Name:", nullptr));
        dateEdit_3->setDisplayFormat(QCoreApplication::translate("MainWindow", "MM/dd/yyyy", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(moneytab), QCoreApplication::translate("MainWindow", "Wages", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Delete Selected", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", " Amount:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "  Name:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "  Monthly Expenses:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "  Select Item", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "  Bills", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "  Fun", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "  Groceries", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "  Savings", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "  Subscriptions", nullptr));

        dateEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "MM/dd/yyyy", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(expenseTab), QCoreApplication::translate("MainWindow", "Expenses", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableBudget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Wages", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableBudget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Expenses", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableBudget->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Left Over", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(budgetTab), QCoreApplication::translate("MainWindow", "PieChart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
