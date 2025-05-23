///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate difference of even facotial and odd factorial
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iEvenFact = 1, iOddFact = 1;
    int iDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt %2) == 0)
        {
            iEvenFact = iEvenFact * iCnt ;
        }
        else 
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    iDiff = iEvenFact - iOddFact;
   
    return iDiff;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between Even Factorial and Odd factorial of %d is : %d\n",iValue,iRet);

    return 0;
}