#ifndef BOOLEANEXPRESSIONS_H
#define BOOLEANEXPRESSIONS_H

#include <string>
using namespace std;

class BooleanExpression
{
private:
    char firstChar;
    char secondChar;
    char thirdChar;

    string firstOperator;
    string secondOperator;

public:
    BooleanExpression();
    void getInput();
    bool calculateResult(bool A, bool B, bool C);
};

#endif