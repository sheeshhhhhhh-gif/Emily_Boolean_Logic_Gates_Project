#ifndef BOOLEANEXPRESSION_H
#define BOOLEANEXPRESSION_H

#include <iostream>
#include "BooleanOperator.h"
using namespace std;

class BooleanExpression
{
    private:
    char A, B, C;
    string Operator;

    public:
    void getInput();
    bool calculateResult(bool A, bool B);
};

#endif