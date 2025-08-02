///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to OFF 7th and 10th BIT of number if ON and return modified number
//
//      Input  : 577
//      Output : 1
//
//      Input  : 1062
//      Output : 1062
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    int iMask = 0x00000dbf;

    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{   
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("%d\n",iRet);

    return 0;
} 