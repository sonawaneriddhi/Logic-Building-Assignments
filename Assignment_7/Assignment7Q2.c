///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to caclulate dollar value of inr rupees
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iResult = 0;

    iResult = iNo * 70;

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("%d$\n", iRet);

    return 0;
}