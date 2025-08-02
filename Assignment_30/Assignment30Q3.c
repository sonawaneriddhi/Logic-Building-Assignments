///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to check wether the 7th, 15th, 21st and 28th BIT is ON or OFF.
//
//      Input  : 135282752
//      Output : 7th, 15th, 21st and 28th BIT is ON
//
//      Input  : 142746376
//      Output : Either of 7th, 15th, 21st and 28th BIT is OFF
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo)
{
    int iMask = 0x08104040;
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
        printf("7th, 15th, 21st and 28th BIT is ON\n");
    }
    else
    {
        printf("Either of 7th, 15th, 21st and 28th BIT is OFF\n");
    }

    return 0;
} 