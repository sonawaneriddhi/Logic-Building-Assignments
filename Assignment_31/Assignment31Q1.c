///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to OFF 7th BIT of number if ON and return modified number
//
//      Input  : 79
//      Output : 15
//
//      Input  : 153
//      Output : 153
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    int iMask = 1;
    iMask = iMask << 6;
    iMask = ~iMask;     
    //Above 3 lines of code : iMask = 0x00000040;

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