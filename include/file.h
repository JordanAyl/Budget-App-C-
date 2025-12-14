#ifndef HONORSEDIT_FILE_H
#define HONORSEDIT_FILE_H

#include <iostream>
#include <vector>
#include <fstream>
#include <QString>
#include "budgetmanager.h"

using namespace std;

class File {
public:

    int printToFile(const QVector<Expense> &vec1,const QVector<Income> &vec2,const QString &leftOverAmount);


};

#endif //HONORSEDIT_FILE_H