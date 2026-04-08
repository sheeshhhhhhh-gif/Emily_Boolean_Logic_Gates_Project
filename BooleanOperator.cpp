#include "BooleanOperator.h"

bool ANDOperator::doOperation(bool a, bool b)
{
    cout << "AND will output true only if both inputs are true\n";
    return a && b;
}

bool OROperator::doOperation(bool a, bool b)
{
    cout << "OR will output true when at least one input is true.\n";
    return a || b;
}

bool XOROperator::doOperation(bool a, bool b)
{
    cout << "XOR will output true if inputs are different.\n";
    cout << ""
    return a != b;
}

bool NANDOperator::doOperation(bool a, bool b)
{
    cout << "NAND will output the opposite of AND, so NAND will output true if at least one input is true\n"; 
    return !(a && b);
}

bool NOROperator::doOperation(bool a, bool b)
{
    cout << "NOR will output the opposite of OR, so NOR will output true if both inputs are false\n";
    return !(a || b);
}

bool NOTOperator::doOperation(bool a)
{
    cout << "NOT basically reverses the inputs\n";
    cout << "Ex: True will become False and False will become True\n";
    return !a;
}