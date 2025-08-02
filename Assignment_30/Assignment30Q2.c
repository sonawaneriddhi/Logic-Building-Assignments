///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to check wether the 5th and 18th BIT is ON or OFF.
//
//      Input  : 143892
//      Output : 5th and 18th Bit is ON
//
//      Input  : 2109972
//      Output : 5th and 18th Bit is OFF
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo)
{
    int iMask = 0x00020010;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{   
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(TRUE == bRet)
    {
        printf("5th and 18th Bit is ON\n");
    }
    else
    {
        printf("Either 5th or 18th Bit is OFF\n");
    }

    return 0;
} 