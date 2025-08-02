///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accept a number and position from user and OFF the bit at that position if OF
//
//      Input  : 10 2
//      Output : 8
//
//      Input  : 170 4
//      Output : 162
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    int iMask = 1;
    iMask = iMask << (iPos - 1); 
    iMask = ~iMask;

    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{   
    UINT iValue = 0;
    int iPos = 0;
    UINT iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    printf("Enter position to OFF a BIT :");
    scanf("%d",&iPos);

    iRet = OffBit(iValue, iPos);

    printf("%d\n",iRet);

    return 0;
} 