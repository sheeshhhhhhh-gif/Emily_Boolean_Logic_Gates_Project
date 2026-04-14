#include <iostream>
#include "BooleanExpressions.h"

using namespace std;

void runTruthTable(BooleanExpression& expr); 

int main()
{
    BooleanExpression expr;

    expr.getInput();  

    runTruthTable(expr);

    return 0;
}