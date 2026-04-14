#ifndef TRUTHTABLE_H
#define TRUTHTABLE_H

#include "BooleanExpressions.h"
#include <string>
using namespace std;

class TruthTable
{
    private:
    BooleanExpression expr;
    public:
    TruthTable(BooleanExpression e);
    void generate();
    void save(string filename, string expression);
};

#endif