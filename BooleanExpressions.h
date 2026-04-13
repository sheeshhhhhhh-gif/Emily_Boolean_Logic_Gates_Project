#ifndef BOOLEANEXPRESSIONS_H
#define BOOLEANEXPRESSIONS_H

#include <string>
#include "BooleanOperator.h"
using namespace std;

class BooleanExpression
{
    private:
    char firstChar, secondChar, thirdVar;
    string firstOperator, secondOperator; 
    bool useNOT;

    public:
    void getInput();
    bool calculateResult(bool A, bool B, bool C, bool &step1, bool &notValue);
};

#endif