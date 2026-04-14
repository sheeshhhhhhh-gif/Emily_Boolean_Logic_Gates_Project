#include "TruthTable.h"
#include "BooleanExpressions.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void runTruthTable(BooleanExpression expr)
{
    char choice;
    cout << "Would you like to save this expression and truth table to a file? (Y/N): ";
    cin >> choice;

    ofstream file;
    string filename;

    if (choice == 'Y' || choice == 'y')
    {
        cout << "Enter filename: ";
        cin >> filename;
        file.open(filename);

        if (!file)
        {
            cout << "Error opening file!\n";
            return;
        }
    }

    cout << "\n| A | B | C | STEP1 | STEP2 | NOT | RESULT |\n";
    cout << "|---|---|---|-------|-------|-----|--------|\n";

    if (file.is_open())
    {
        file << "| A | B | C | STEP1 | STEP2 | NOT | RESULT |\n";
        file << "|---|---|---|-------|-------|-----|--------|\n";
    }

    for (int i = 0; i < 8; i++)
    {
        bool A = (i & 4) != 0;
        bool B = (i & 2) != 0;
        bool C = (i & 1) != 0;

        bool s1, s2, n;
        bool result = expr.calculateResult(A, B, C, s1, s2, n);

        cout << "| " << A << " | " << B << " | " << C
             << " | " << s1
             << " | " << s2
             << " | " << n
             << " | " << result << " |\n";

        if (file.is_open())
        {
            file << "| " << A << " | " << B << " | " << C
                 << " | " << s1
                 << " | " << s2
                 << " | " << n
                 << " | " << result << " |\n";
        }
    }

    if (file.is_open())
    {
        file.close();
        cout << "\nSaved successfully!\n";
    }
}