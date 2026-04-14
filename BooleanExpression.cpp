#include "BooleanExpressions.h"
#include <iostream>

using namespace std;

BooleanExpression::BooleanExpression()
{
    firstChar=secondChar=thirdChar=' ';
    useNOT=false;
}

void BooleanExpression::getInput()
{
    cout << "*** BOOLEAN SIMULATOR ***\n\n";
    cout << "Enter expression (A AND B OR C):\n";

    cin >> firstChar >> firstOperator >> secondChar >> secondOperator >> thirdChar;

    cout << "\nOperators Detected:\n";

    if (firstOperator=="AND")
    {
        cout << "- AND\n";
    }
    else if (firstOperator=="OR")
    {
        cout << "- OR\n";
    }
    else if (firstOperator=="XOR")
    {
        cout << "- XOR\n";
    }
    else if (firstOperator=="NAND")
    {
        cout << "- NAND\n";
    }
    else if (firstOperator=="NOR")
    {
        cout << "- NOR\n";
    }

}