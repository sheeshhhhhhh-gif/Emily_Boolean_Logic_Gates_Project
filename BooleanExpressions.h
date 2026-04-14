#ifndef BOOLEANEXPRESSIONS_H
#define BOOLEANEXPRESSIONS_H

#include <string>
#include "BooleanOperator.h"
using namespace std;

class BooleanExpression
{
    private:
    char firstChar, secondChar, thirdChar, fourthChar;
    string firstOperator, secondOperator, thirdOperator; 
    bool useNOT;

    public:
    BooleanExpression();
    void getInput();
    bool calculateResult(bool A, bool B, bool C, bool &step1, bool &step2, bool &notValue);
};

#endif