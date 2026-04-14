#include "BooleanExpressions.h"
#include <iostream>

using namespace std;

BooleanExpression::BooleanExpression()
{
    firstChar=' ';
    secondChar=' ';
    thirdChar=' ';
}

bool getValue(char value, bool A, bool B, bool C)
{
    switch (value)
    {
        case 'A': return A;
        case 'B': return B;
        case 'C': return C;
        default: return false;
    }
}

void BooleanExpression::getInput()
{
    cout << "*** BOOLEAN SIMULATOR ***\n\n";
    cout << "Enter expression (max 3 operators):\n";

    cin >> firstChar >> firstOperator >> secondChar >> secondOperator >> thirdChar;
    cout << firstChar << " " << firstOperator << " " << secondChar << " " << secondOperator << " " << thirdChar << endl;

    cout << "\nOperators Detected:\n";
    cout << "- " << firstOperator << "\n";
    cout << "- " << secondOperator << "\n";


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
        cout << "- NOR: True if both values false\n";
    }
    else if (firstOperator=="NOT")
    {
        cout << "- NOT: Inverts the input\n";
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
        cout << "- NOR: True if both values false\n";
    }
    else if (secondOperator=="NOT")
    {
        cout << "- NOT: Inverts the input\n";
    }
}

bool BooleanExpression::calculateResult(bool A, bool B, bool C)
{
    bool value1 = getValue(firstChar, A, B, C);
    bool value2 = getValue(secondChar, A, B, C);
    bool value3 = getValue(thirdChar, A, B, C);

    bool step1 = false;

    if (firstOperator == "AND")
    {
        step1 = value1 && value2;
    }
    else if (firstOperator == "OR")
    {
        step1 = value1 || value2;
    }
    else if (firstOperator == "XOR")
    {
        step1 = value1 != value2;
    }
    else if (firstOperator == "NAND")
    {
        step1 = !(value1 && value2);
    }
    else if (firstOperator == "NOR")
    {
        step1 = !(value1 || value2);
    }

    
    if (secondOperator == "AND")
    {
        return step1 && value3;
    }
    else if (secondOperator == "OR")
    {
        return step1 || value3;
    }
    else if (secondOperator == "XOR")
    {
        return step1 != value3;
    }
    else if (secondOperator == "NAND")
    {
        return !(step1 && value3);
    }
    else if (secondOperator == "NOR")
    {
        return !(step1 || value3);
    }

    return false;
}
