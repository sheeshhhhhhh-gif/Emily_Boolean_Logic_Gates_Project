#ifndef BOOLEANOPERATOR_H
#define BOOLEANOPERATOR_H

#include <iostream>
using namespace std;

//this is the base class 
class BooleanOperator
{
    public:
    virtual bool doOperation(bool a, bool b);
};

//this is the AND operation
class ANDOperator
{
    public:
    bool doOperation(bool a, bool b);
};

//this is the OR operation
class OROperator 
{
    public:
    bool doOperation(bool a, bool b);
};

//this is the NOTOperator
class NOTOperator
{
    public:
    bool doOperation(bool a);
};

#endif