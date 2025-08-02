///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accept a number and position from user and ON the bit at that position if OF
//
//      Input  : 10 3
//      Output : 14
//
//      Input  : 162 4
//      Output : 170
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    int iMask = 1;
    iMask = iMask << (iPos - 1); 

    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{   
    UINT iValue = 0;
    int iPos = 0;
    UINT iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    printf("Enter position to ON a BIT :");
    scanf("%d",&iPos);

    iRet = OnBit(iValue, iPos);

    printf("%d\n",iRet);

    return 0;
} 