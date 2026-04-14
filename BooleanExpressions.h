#ifndef BOOLEANEXPRESSIONS_H
#define BOOLEANEXPRESSIONS_H

#include <string>
using namespace std;

class BooleanExpression
{
    private:
    string expression;

    public:
    void getInput();
    bool calculateResult(bool A, bool B, bool C);

    private:
    bool evaluate (string expr, bool A, bool B, bool C);
    bool getValue (char value, bool A, bool B, bool C);
    void printOperatorInfo(string expr);
};

#endif