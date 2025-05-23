///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate even factorial of a number
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt %2) == 0)
        {
            iFact = iFact * iCnt ;
        }
    }

    return iFact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of %d is %d\n",iValue,iRet);

    return 0;
}