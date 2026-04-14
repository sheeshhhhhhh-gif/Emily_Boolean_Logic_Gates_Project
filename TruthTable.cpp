#include "TruthTable.h"
#include <iostream>
#include <fstream>

using namespace std;

void runTruthTable(BooleanExpression& expr)
{
    char choice;

    cout << "Save to file? (Y/N): ";
    cin >> choice;

    ofstream file;

    if (choice=='Y' || choice=='y')
    {
        string filename;
        cout << "Enter filename: ";
        cin >> filename;
        file.open(filename);
    }

    cout << "\n| A | B | C | RESULT |\n";
    cout << "|---|---|---|--------|\n";

    for (int i = 0; i < 8; i++)
    {
        bool A=(i & 4);
        bool B=(i & 2);
        bool C=(i & 1);

        bool result=expr.calculateResult(A, B, C);

        cout << "| " << A << " | " << B << " | " << C << " | " << result << " |\n";

        if (file.is_open())
        {
            file << "| " << A << " | " << B << " | " << C << " | " << result << " |\n";
        }
    }

    if (file.is_open())
    {
        file.close();
        cout << "\nSaved successfully!\n";
    }
}