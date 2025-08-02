///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to check wether the 7th, 8th and 9th BIT is ON or OFF.
//
//      Input  : 2498
//      Output : 7th, 8th and 9th BIT is ON
//
//      Input  : 10642
//      Output : 7th, 8th and 9th BIT is ON
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo)
{
    int iMask = 0x000001c0;
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
        printf("7th, 8th and 9th BIT is ON\n");
    }
    else
    {
        printf("Either of 7th, 8th and 9th BIT is OFF\n");
    }

    return 0;
} 