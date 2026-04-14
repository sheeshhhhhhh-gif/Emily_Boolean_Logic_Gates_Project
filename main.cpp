#include <iostream>
#include "BooleanExpressions.h"

using namespace std;

void runTruthTable(BooleanExpression &expr);

int main()
{
    cout << "PROGRAM STARTED\n\n";
    BooleanExpression expr;
    expr.getInput();
    runTruthTable(expr);
}
