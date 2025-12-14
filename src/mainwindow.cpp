#include "../include/mainwindow.h"
#include "./ui_mainwindow.h"
#include "../include/file.h"
#include <QDebug>

//includes for the Pie Chart
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QtCharts/QPieSlice>

//includes are for the resize animations
#include <QPainter>
#include <QTabWidget>
#include <QPropertyAnimation>
#include <QEasingCurve>

// allows for table header resize
#include <QHeaderView>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    //makes this ui the mainwindow.ui
    ui->setupUi(this);

    ////////////////// Window setup ///////////////////////////
    resize(625, 500);  //sets initial window size
    setWindowTitle("Honor's Budget App"); //Set window title
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint); //Remove the maximize button

    ////////////////// Initial UI State ///////////////////////////

    //sets tab page to the first tab
    ui->tabWidget->setCurrentIndex(0);

    //wagesTable text not editable
    ui->wagesTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->summaryText->setReadOnly(true);
    //resizes the tableBudgets columns to fit
    ////ui->tableBudget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ////////////////// Connections ///////////////////////////

    //need to change everything from foo bar call to connect()
    //this connects signal of the tab index to onTabChanged to create a tab animation.
    connect(ui->tabWidget, &QTabWidget::currentChanged,
            this, &MainWindow::onTabChanged);


    ////////////////// Pie Chart setup ///////////////////////////
    auto *series = new QPieSeries(this);
    series->append("Rent",       1200);
    series->append("Groceries",   400);
    series->append("Utilities",   150);
    series->append("Fun",         200);
    series->append("Savings",     300);

    // add the pie chart
    auto *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Monthly Budget Breakdown");
    chart->legend()->setAlignment(Qt::AlignRight);

    // chartView = the promoted widget in the .ui file
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);

}

//change from foo bar to connection
//wages button adds text from QStrings and date from QDate to the wages table/
void MainWindow::on_wagesAddButton_clicked()
{
    QString text1 = ui->wagesLine1->text();
    QString text2 = ui->wagesLine2->text();
    QDate dateEditDate = ui->dateWages->date();

    //convert amount string to double
    double amount = text2.toDouble();


    Income income;
    income.name = text1;
    income.amount = amount;
    income.date = dateEditDate;

    member_budget.addIncome(income); //member_budget instantiated in the .h

    int row = ui->wagesTable->rowCount();
    ui->wagesTable->insertRow(row);

    ui->wagesTable->setItem(row, 0, new QTableWidgetItem(text1));
    ui->wagesTable->setItem(row, 1, new QTableWidgetItem(text2));
    ui->wagesTable->setItem(row, 2, new QTableWidgetItem(dateEditDate.toString("yyyy-MM-dd")));

    //clear inputs after adding
    ui->wagesLine1->clear();
    ui->wagesLine2->clear();
    refreshSummaryText();
}

//change from foo bar to connection
void MainWindow::on_expensesAddButton_clicked()
{
    QString text1   = ui->expenseName->text();        // expense name
    QString text2   = ui->expenseAmount->text();      // amount as string
    QString category = ui->categoryExpense->currentText();
    QDate dateEditDate = ui->dateExpense->date();

    //convert amount to double
    double amount = text2.toDouble();

    Expense expense;
    expense.name     = text1;
    expense.amount   = amount;
    expense.category = category;
    expense.date     = dateEditDate;

    member_budget.addExpense(expense); //member_budget instantiated in the .h

    int row = ui->expenseTable->rowCount();
    ui->expenseTable->insertRow(row);

    ui->expenseTable->setItem(row, 0, new QTableWidgetItem(text1));
    ui->expenseTable->setItem(row, 1, new QTableWidgetItem(text2));
    ui->expenseTable->setItem(row, 2, new QTableWidgetItem(category));
    ui->expenseTable->setItem(row, 3, new QTableWidgetItem(dateEditDate.toString("yyyy-MM-dd")));

    refreshSummaryText();

    //clear text from expense text line
    ui->expenseName->clear();
    ui->expenseAmount->clear();
    refreshSummaryText();
}

//wage delete selected button code
void MainWindow::on_deleteWageButton_clicked()
{
    int row = ui->wagesTable->currentRow();
    if (row < 0)
        return;

    //remove row from vector
    member_budget.removeIncomeAt(row); //member_budget instantiated in the .h

    //remove row from wages table
    ui->wagesTable->removeRow(row);

    refreshSummaryText();
}

void MainWindow::on_printStatementButton_clicked()
{
    File f;
    QString leftover = QString::number(member_budget.netBalance(), 'f', 2);
    f.printToFile(member_budget.getExpenses(), member_budget.getIncomes(), leftover);
}

//wage delete selected button code
void MainWindow::on_deleteExpenseButton_clicked()
{
    int row = ui->expenseTable->currentRow();


    if (row < 0)
        return;

    member_budget.removeExpenseAt(row);
    // Remove row
    ui->expenseTable->removeRow(row);
    refreshSummaryText();
}

// Animates window size when the current tab changes
void MainWindow::onTabChanged(int index)
{
    QSize targetSize;

    switch (index) {
        case 2: // Pie tab
            targetSize = QSize(1200, 800);
            break;
        case 1: // Expense tab
            targetSize = QSize(730, 500);
            break;
        default: // Income tab
            targetSize = QSize(625, 500);
            break;
    }

    auto *anim = new QPropertyAnimation(this, "size");
    anim->setDuration(300);
    anim->setStartValue(size());
    anim->setEndValue(targetSize);
    anim->setEasingCurve(QEasingCurve::InOutCubic);
    anim->start(QAbstractAnimation::DeleteWhenStopped);
}

void MainWindow::refreshSummaryText()
{

    ui->summaryText->setPlainText("Total Income: "+QString::number(member_budget.totalIncome())
                                    +"\n\nTotal Expenses: "+QString::number(member_budget.totalExpenses())+"\n"
                                    +"\nTotal Left Over: "+QString::number(member_budget.netBalance()));


}

MainWindow::~MainWindow()
{
    delete ui;
}
