#include "TruthTable.h"
#include <iostream>
using namespace std;

void TruthTables::generate(BooleanExpression expr)
{
    char choice;
    cout << "Would you like to save this expression and truth table to a file? (Y/N):"
    cin >> choice;

    ofstream file;
    string filename;

    if(choice=='Y' || choice=='y')
    {
        cout << "Enter filename: ";
        cin >> filename;
        file.open(filename);
    }
}
