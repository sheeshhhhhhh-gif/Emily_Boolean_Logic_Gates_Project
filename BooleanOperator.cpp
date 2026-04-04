#include "BooleanOperator.h"

bool ANDOperator::doOperation(bool a, bool b)
{
    cout << "Using the AND Operator\n";
    return a && b;
}

bool OROperator::doOperation(bool a, bool b)
{
    cout << "Using the OR Operator\n";
    return a || b;
}

bool XOROperator::doOperation(bool a, bool b)
{
    cout << "Using the XOR Operator\n";
    return a != b;
}

bool NANDOperator::doOperation(bool a, bool b)
{
    cout << "Using the NAND Operator\n";
    return !(a && b);
}

bool NOROperator::doOperation(bool a, bool b)
{
    cout << "Using the NOR Operator\n";
    return !(a || b);
}

bool NOTOperator::doOperation(bool a)
{
    cout << "Using the NOT Operator\n";
    return !a;
}