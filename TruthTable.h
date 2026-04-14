#ifndef TRUTHTABLE_H
#define TRUTHTABLE_H

#include "BooleanExpressions.h"

class TruthTable
{
    private:
    BooleanExpression expression;

    public:
    void setExpression(BooleanExpression expression);
    void generate();
};

#endif