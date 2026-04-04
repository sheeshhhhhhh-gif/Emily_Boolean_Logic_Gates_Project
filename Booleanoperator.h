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

//this is the OR operation
class OROperator 
{
    public:
    bool doOperation(bool a, bool b)
    {
        return a || b;
    }
};

//this is the XOR operation
class XOROperator
{
    public:
    bool doOperation(bool a, bool b)
    {
        return a != b;
    }
};

//this is the NAND operation
class NANDOperator
{
    public:
    bool doOperation(bool a, bool b)
    {
        return !(a && b);
    }
};

//this is the NOROperator
class
{
    public:
    bool doOperation(bool a, bool b)
    {
        return !(a || b);
    }
};



#endif