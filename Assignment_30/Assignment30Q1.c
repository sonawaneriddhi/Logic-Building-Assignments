///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to check wether the 15th BIT is ON or OFF.
//
//      Input  : 19040
//      Output : 15th Bit is ON
//
//      Input  : 2656
//      Output : 15th Bit is OFF
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo)
{
    int iMask = 0x00004000;
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
        printf("15th Bit is ON\n");
    }
    else
    {
        printf("15th Bit is OFF\n");
    }

    return 0;
} 