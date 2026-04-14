#include "TruthTable.h"
#include <iostream>
#include <fstream>

using namespace std;

void runTruthTable(BooleanExpression &expr)
{
    string rows[8]; //truth table with 3 inputs have like 8 lines

    for (int i = 0; i < 8; i++)
    {
        bool A=(i & 4);
        bool B=(i & 2);
        bool C=(i & 1);

        bool result=expr.calculateResult(A, B, C);

        rows[i]=to_string(A) + " | " + to_string(B) + " | " + to_string(C) + " | " + to_string(result);
        
    }

    cout << "\n| A | B | C | RESULT |\n";
    cout << "|---|---|---|--------|\n";

    for (int i = 0; i < 8; i++)
    {
        cout << "| " << rows[i] << " |\n";
    }

  
    char choice;
    cout << "\nSave to file? (Y/N): ";
    cin >> choice;

    if (choice=='Y' || choice=='y')
    {
        string filename;
        cout << "Enter filename: ";
        cin >> filename;

        ofstream file(filename);

        file << "A B C RESULT\n";

        for (int i = 0; i < 8; i++)
        {
            file << rows[i] << "\n";
        }

        file.close();

        cout << "Saved successfully!\n";
    }
}