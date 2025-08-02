///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to ON 4th BIT of number if OFF and return modified number
//
//      Input  : 65  
//      Output : 73
//
//      Input  : 620
//      Output : 620
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    int iMask = 1;
    iMask = iMask << 3;

    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{   
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("%d\n",iRet);

    return 0;
} 