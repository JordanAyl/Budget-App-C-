#include "../include/file.h"
#include "../include/budgetmanager.h"
#include <iostream>
#include <fstream>


int File::printToFile(const QVector<Expense> &vec1,const QVector<Income> &vec2,const QString &leftOverAmount)
{

    //Qvector is change to a normal vector.
    vector<Expense> expenses(vec1.begin(), vec1.end());
    //Qvector is change to a normal vector.
    vector<Income> income(vec2.begin(), vec2.end());
    //QString is change to a normal string.
    string leftover = leftOverAmount.toUtf8().toStdString();

    cout << "Vector<Expense> 1 elements:\n";
        for (auto x : vec1) {
            cout << x << " ";
        }
        cout << "\n\n";


        cout << "Vector<Income> 2 elements:\n";
        for (auto x : vec2) {
            cout << x << " ";
        }
        cout << "\n";

        ofstream outFile("budgetData.txt");
        if (!outFile) {
            cerr << "Error opening file.\n";
            return 1;
        }

        outFile << "Vector 1:\n";
        for (auto x : vec1) {
            outFile << x << " ";
        }
        outFile << "\n\n";

        outFile << "Vector 2:\n";
        for (auto x : vec2) {
            outFile << x << " ";
        }
        outFile << "\n";

        outFile.close();
        cout << "\nData successfully written to vectors.txt\n";

        system("start budgetData.txt");

        return 0;

}