#ifndef BOOLEANOPERATOR_H
#define BOOLEANOPERATOR_H

#include <iostream>
using namespace std;

//this is the AND operation
class BooleanOperator
{
    public:
    bool doOperation(bool a, bool b)
    {
        return a && b;
    }
};


#endif