#include "BooleanExpressions.h"

void BooleanExpression::getInput()
{
    cout << "*** BOOLEAN TRUTH TABLE SIMULATOR ***\n\n";

    cout << "Enter expression (A, B, C, AND, OR, NOT):\n";
    getline(cin, expression);
    
    notA=false;
    notB=false;
    notC=false;

    string x; //x is to store the NOT value
    
    cin >> x;
    if (x=="NOT")
    {
        cin >> x;
        if (x=="A") 
        {
            notA=true;
        }
        if (x=="B")
        {
            notB=true;
        }
        if (x=="C")
        {
            notC=true;
        }

    }
}