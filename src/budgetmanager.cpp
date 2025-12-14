#include "../include/budgetmanager.h"

using namespace std;

BudgetManager::BudgetManager() {
}

void BudgetManager::addIncome(const Income &income)
{
    member_incomes.push_back(income);
}

void BudgetManager::addExpense(const Expense &expense)
{
    member_expenses.push_back(expense);
}

//Evelyns code switched too vector
double BudgetManager::totalIncome() const
{
    double total = 0.0;
    for (const auto &income : member_incomes) {
        total += income.amount;
    }
    return total;
}

//Evelyns Code switched too vector
double BudgetManager::totalExpenses() const
{
    double total = 0.0;
    for (const auto &expense : member_expenses) {
        total += expense.amount;
    }
    return total;
}

double BudgetManager::netBalance() const
{
    return totalIncome() - totalExpenses();
}

//getter for Income
const QVector<Income>& BudgetManager::getIncomes() const
{
    return member_incomes;
}

//getter for Expense
const QVector<Expense>& BudgetManager::getExpenses() const
{
    return member_expenses;
}

void BudgetManager::removeIncomeAt(int index)
{
    if (index >= 0 && index < member_incomes.size()) {
        member_incomes.removeAt(index);
    }
}

void BudgetManager::removeExpenseAt(int index)
{
    if (index >= 0 && index < member_expenses.size()) {
        member_expenses.removeAt(index);
    }
}
