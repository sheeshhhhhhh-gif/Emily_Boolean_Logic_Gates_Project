#ifndef BOOLEANOPERATOR_H
#define BOOLEANOPERATOR_H

#include <iostream>
using namespace std;

//this is the AND operation
class ANDOperator
{
    public:
    bool doOperation(bool a, bool b)
    {
        return a && b;
    }
};

class OROperator 
{
    public:
    bool doOperation(bool a, bool b)
    {
        return a || b;
    }
};


#endif