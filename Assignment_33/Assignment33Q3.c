///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to check wether the 9th or 12th BIT is ON or OFF.
//
//      Input  : 257
//      Output : TRUE
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo)
{
    int iMask = 0x00000100;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }

    iMask = 0x00000800;
    
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
        printf("9th or 12th Bit is ON\n");
    }
    else
    {
        printf("Either 9th or 12th Bit is OFF\n");
    }

    return 0;
} 