////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate the multiplication of factors
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iResult = MultFact(iValue);

    printf("Multiplication of factors is: %d\n",iResult);

    return 0;
}