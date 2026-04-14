#include "BooleanExpressions.h"
#include <iostream>

using namespace std;

BooleanExpression::BooleanExpression()
{
    firstChar = ' ';
    secondChar = ' ';
    thirdChar = ' ';
}

bool getValue(char value, bool A, bool B, bool C)
{
    if (value=='A')
    {
        return A;
    }
    if (value=='B')
    {
        return B;
    }
    return C;
}

void BooleanExpression::getInput()
{
    cout << "*** BOOLEAN SIMULATOR ***\n\n";
    cout << "Enter expression (A AND B OR C):\n";

    cin >> firstChar >> firstOperator >> secondChar >> secondOperator >> thirdChar;

    cout << "\nOperators Detected:\n";
    cout << "- " << firstOperator << "\n";
    cout << "- " << secondOperator << "\n";
}

bool BooleanExpression::calculateResult(bool A, bool B, bool C)
{
    bool value1 = getValue(firstChar, A, B, C);
    bool value2 = getValue(secondChar, A, B, C);
    bool value3 = getValue(thirdChar, A, B, C);

    bool step1 = false;

    if (firstOperator=="AND")
    {
        cout << "- AND: True only if both inputs are true\n";
    }
    else if (firstOperator=="OR")
    {
        cout << "- OR: True if at least one input is true\n";
    }
    else if (firstOperator=="XOR")
    {
        cout << "- XOR: True if both inputs are different\n";
    }
    else if (firstOperator=="NAND")
    {
        cout << "- NAND: True if at least one input is false\n";
    }
    else if (firstOperator=="NOR")
    {
        cout << "- NOR: inverts the input\n";
    }

     if (secondOperator=="AND")
    {
        cout << "- AND: True only if both inputs are true\n";
    }
    else if (secondOperator=="OR")
    {
        cout << "- OR: True if at least one input is true\n";
    }
    else if (secondOperator=="XOR")
    {
        cout << "- XOR: True if both inputs are different\n";
    }
    else if (secondOperator=="NAND")
    {
        cout << "- NAND: True if at least one input is false\n";
    }
    else if (secondOperator=="NOR")
    {
        cout << "- NOR: inverts the input\n";
    }
}