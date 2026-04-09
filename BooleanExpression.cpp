#include "BooleanExpressions.h"

void BooleanExpression::getInput()
{
    cout << "*** BOOLEAN TRUTH TABLE SIMULATOR ***\n\n";

    cout << "Enter Boolean Expression (max 3 operators, variables A, B, C):\n";

    string x; //x is to store theNOT

    notA=false;
    notB=false;
    notC=false;

    //for the A or NOT A
    cin >> x;
    if (x=="NOT")
    {
        cin >> x;
        if (x=="A")
        {
            notA=true;
        }
        else if (x=="B")
        {
            notB=true;
        }
        else if (x=="C")
        {
            notC=true;
        }
    }

    //for the B or NOT B
    cin >> operator1;
    cin >> x;
    if (x=="NOT")
    {
        cin >> x;
        if (x=="A")
        {
            notA=true;
        }
        else if (x=="B")
        {
            notB=true;
        }
        else if (x=="C")
        {
            notC=true;
        }
    }

    //for the C or NOT C
    cin >> operator2;
    cin >> x;
    if (x=="NOT")
    {
        cin >> x;
        if (x=="A")
        {
            notA=true;
        }
        else if (x=="B")
        {
            notB=true;
        }
        else if (x=="C")
        {
            notC=true;
        }
    }

    cout << "\nOperators Detected:\n";
    if (operator1=="AND" || operator2=="AND")
    {
        cout << "- AND: True only if both inputs are true\n";
    }

    if (operator1=="OR" || operator2=="OR")
    {
        cout << "- OR: True only if at least one input is true\n";
    }

    cout << "- NOT: Invert the inputs, ex: 0 will become 1\n";

}

bool BooleanExpression::calculateResult(bool A, bool B, bool C)
{
    if (notA) A = !A;
    if (notB) B = !B;
    if (notC) C = !C;

    bool step1;
    bool result;

    if(operator1=="AND")
    {
        step1 = A && B;
    }
    else
    {
    
        step1 = A || B;
    }

    if(operator2=="AND")
    {
        result = step1 && C;
    }
    else
    {
    
        result = step1 || C;
    }

    return result;
  
}