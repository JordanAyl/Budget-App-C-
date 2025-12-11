#ifndef BUDGETMANAGER_H
#define BUDGETMANAGER_H
#include <QString>
#include <QDate>
#include <QVector>
#include <ostream>

struct Income {
    QString name;
    double amount;
    QDate date;
};

struct Expense {
    QString name;
    double amount;
    QDate date;
    QString category;
};

inline std::ostream& operator<<(std::ostream &os, const Income &inc) {
    os << " Name: " << inc.name.toStdString()
       << ", Amount: "      << inc.amount
       << ", Date: "        << inc.date.toString("MM/dd/yyyy").toStdString() << std::endl;
    return os;
}

inline std::ostream& operator<<(std::ostream &os, const Expense &exp) {
    os << " Name: " << exp.name.toStdString()
       << ", Amount: "       << exp.amount
       << ", Date: "         << exp.date.toString("MM/dd/yyyy").toStdString()
       << ", Category: /n"     << exp.category.toStdString()<< std::endl;
    return os;
}

class BudgetManager {
public:
    BudgetManager();

    // add items
    void addIncome(const Income &income);
    void addExpense(const Expense &expense);

    // remove items
    void removeIncomeAt(int index);
    void removeExpenseAt(int index);

    // totals
    double totalIncome() const;
    double totalExpenses() const;
    double netBalance() const;


    // getters for data
    const QVector<Income>& getIncomes() const;
    const QVector<Expense>& getExpenses() const;

private:
    QVector<Income> member_incomes;
    QVector<Expense> member_expenses;
};

#endif // BUDGETMANAGER_H