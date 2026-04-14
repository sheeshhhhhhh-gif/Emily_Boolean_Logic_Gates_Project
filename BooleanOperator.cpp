#include "BooleanOperator.h"

bool ANDOperator::doOperation(bool a, bool b)
{
    return a && b;
}

bool OROperator::doOperation(bool a, bool b)
{
    return a || b;
}

bool NOTOperator::doOperation(bool a)
{
    return !a;
}

bool XOROperator::doOperation(bool a, bool b)
{
    return a!=b;
}

bool NANDOperator::doOperation(bool a, bool b)
{
    return !(a&&b);
}

bool NOROperator::doOperation(bool a, bool b)
{
    return !(a||b);
}