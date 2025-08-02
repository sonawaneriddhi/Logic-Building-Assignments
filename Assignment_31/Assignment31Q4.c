///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to toggle 7th and 10th Bit return modified number
//
//      Input  : 137
//      Output : 713
//
//      Input  : 713
//      Output : 137
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    int iMask = 0x00000240;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{   
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("%d\n",iRet);

    return 0;
} 