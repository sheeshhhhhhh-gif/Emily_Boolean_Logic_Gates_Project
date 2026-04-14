#include "BooleanExpressions.h"

// get value of each variable
bool getValue(char value, bool A, bool B, bool C) 
{
    if (value=='A') 
    {
        return A;
    }
    if (value=='B') 
    {
        return B;
    }
    return C;
}

void BooleanExpression::getInput()
{
    cout << "*** BOOLEAN SIMULATOR ***\n\n";
    cout << "Enter expression (max 3 operations, variables A, B, C):\n\n";

    string temporary;

    cin >> firstChar >> firstOperator >> secondChar >> secondOperator >> temporary;

    if (temporary=="NOT") 
    {
        useNOT=true;
        cin >> thirdChar;
        thirdOperator="";
        fourthChar='C'; 
    } 
    else 
    {
        useNOT=false;
        thirdChar=temporary[0];
        cin >> thirdOperator >> fourthChar;
    }

    cout << "\nOperators Detected and Explained:\n";

    string operators[3]={firstOperator, secondOperator, thirdOperator};

    for (int i = 0; i < 3; i++) //can only have max 3 operators 
    {
        if (operators[i]=="AND") 
        {
            cout << "- AND: True only if both inputs are true\n";
        }
        else if (operators[i]=="OR") 
        {
            cout << "- OR: True if at least one input is true\n";
        }
        else if (operators[i]=="XOR") 
        {
            cout << "- XOR: True if only one input is true\n";
        }
        else if (operators[i]=="NAND") 
        {
            cout << "- NAND: True if NOT both inputs are true\n";
        }
        else if (operators[i]=="NOR") 
        {
            cout << "- NOR: True if both inputs are false\n";
        }

        if (useNOT) 
        {
            cout << "- NOT: inverts the input\n";
        }
    }
}

bool BooleanExpression::calculateResult(bool A, bool B, bool C, bool &step1, bool &step2, bool &notValue)
{
    bool value1=getValue(firstChar, A, B, C);
    bool value2=getValue(secondChar, A, B, C);
    bool value3=getValue(thirdChar, A, B, C);
    bool value4=getValue(fourthChar, A, B, C);

    // for step 1
    if (firstOperator=="AND") 
    {
        step1=(value1 && value2);
    }
    else if (firstOperator=="OR") 
    {
        step1=(value1 || value2);
    }
    else if (firstOperator=="XOR") 
    {
        step1=(value1!=value2);
    }
    else if (firstOperator=="NAND") 
    {
        step1=!(value1 && value2);
    }
    else if (firstOperator=="NOR") 
    {
        step1=!(value1 || value2);
    }

    // for step 2
    if (secondOperator=="AND") 
    {
        step2=(step1 && value3);
    }
    else if (secondOperator=="OR") 
    {
        step2=(step1 || value3);
    }
    else if (secondOperator=="XOR") 
    {
        step2=(step1!=value3);
    }
    else if (secondOperator=="NAND")
    {
        step2=!(step1 && value3);
    }
    else if (secondOperator=="NOR") 
    {
        step2=!(step1 || value3);
    }

    // for not gate
    if (useNOT)
    {
        notValue=(!value3);
    }
    else
    {
        notValue=value4;
    }

    // final 
    string finalOperator;

    if (thirdOperator=="")
    {
        finalOperator=secondOperator;
    }
    else
    {
        finalOperator=thirdOperator;
    }

    bool result;

    if (finalOperator=="AND") 
    {
        result=(step2 && notValue);
    }
    else if (finalOperator=="OR") 
    {
        result=(step2 || notValue);
    }
    else if (finalOperator=="XOR") 
    {
        result=(step2!=notValue);
    }
    else if (finalOperator=="NAND") 
    {
        result=!(step2 && notValue);
    }
    else if (finalOperator=="NOR") 
    {
        result=!(step2 || notValue);
    }
    else
    {
        result=false; 
    }

    return result;
}
