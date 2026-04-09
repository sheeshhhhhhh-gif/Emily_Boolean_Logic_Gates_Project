#ifndef BOOLEANEXPRESSIONS_H
#define BOOLEANEXPRESSIONS_H

#include <iostream>
#include "BooleanOperator.h"
using namespace std;

class BooleanExpression
{
    private:
    string operator1, operator2;
    bool notA, notB, notC;

    public:
    void getInput();
    bool calculateResult(bool A, bool B, bool C);
};

#endif