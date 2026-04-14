#include "BooleanExpressions.h"
#include <iostream>

using namespace std;

void BooleanExpression::getInput()
{
    cout << "*** BOOLEAN SIMULATOR ***\n";
    cout << "Enter boolean expression (max 3 operators, variables A, B, C):\n";

    getline(cin, expression);

    cout << "\nOperators Detected:\n";
    printOperatorInfo(expression);
}

void BooleanExpression::printOperatorInfo(string expr)
{
    if (expr.find("AND") != string::npos)
    {
        cout << "- AND: True only if both inputs are true\n";
    }

    if (expr.find("OR") != string::npos)
    {
        cout << "- OR: True if at least one input is true\n";
    }

    if (expr.find("XOR") != string::npos)
    {
        cout << "- XOR: True if inputs are different\n";
    }

    if (expr.find("NAND") != string::npos)
    {
        cout << "- NAND: True if at least one input is false\n";
    }

    if (expr.find("NOR") != string::npos)
    {
        cout << "- NOR: True if both inputs are false\n";
    }

    if (expr.find("NOT") != string::npos)
    {
        cout << "- NOT: Inverts the input\n";
    }
}

bool BooleanExpression::getValue(char value, bool A, bool B, bool C)
{
    if (value == 'A') 
    {
        return A;
    }
    if (value == 'B') 
    {
        return B;
    }
    if (value == 'C') 
    {
        return C;
    }
}

bool BooleanExpression::evaluate(string expr, bool A, bool B, bool C)
{
    if(expr.front()=='(' && expr.back()==')')
    {
        return evaluate(expr.substr(1, expr.size() -2), A, B, C);
    }

    if(expr.find("NOT ")==0)
    {
        return !evaluate(expr.substr(4), A, B, C);
    }

    size_t pos;

    if((pos=expr.find(" AND "))!=string::npos)
    {
        return evaluate(expr.substr(0, pos), A, B, C) && evaluate(expr.substr(pos+5), A, B, C);
    }

    if((pos=expr.find(" OR "))!=string::npos)
    {
        return evaluate(expr.substr(0, pos), A, B, C) || evaluate(expr.substr(pos+4), A, B, C);
    }

    if((pos=expr.find(" XOR "))!=string::npos)
    {
        return evaluate(expr.substr(0, pos), A, B, C) != evaluate(expr.substr(pos+5), A, B, C);
    }

    if((pos=expr.find(" NAND "))!=string::npos)
    {
        return !(evaluate(expr.substr(0, pos), A, B, C) || evaluate(expr.substr(pos+6), A, B, C));
    }

    if((pos=expr.find(" NOR "))!=string::npos)
    {
        return !(evaluate(expr.substr(0, pos), A, B, C) || evaluate(expr.substr(pos+5), A, B, C));
    }

    else
    {
        getValue(expr[0], A, B, C);
    }
}

bool BooleanExpression::calculateResult(bool A, bool B, bool C)
{
    return evaluate(expression, A, B, C);
}