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
    char fourthChar;

    string firstOperator;
    string secondOperator; 
    
    bool useNOT;
    
    public:
    BooleanExpression();
    void getInput();
    bool calculateResult(bool A, bool B, bool C);
};

#endif