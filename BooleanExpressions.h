#ifndef BOOLEANEXPRESSION_H
#define BOOLEANEXPRESSION_H

#include <iostream>
#include "BooleanOperator.h"
using namespace std;

class BooleanExpression
{
    private:
    char A, B, C;
    string operator1, operator2, operator3;

    public:
    void getInput();
    bool calculateResult(bool A, bool B, bool C, bool &step1, bool &notValue);
};

#endif