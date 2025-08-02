///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to check wether the first and the last BIT is ON or OFF.
//
//      Input  : 2147483653
//      Output : First and Last BIT is ON
//
//      Input  : 1049733
//      Output : First and Last BIT is OFF
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo)
{
    int iMask = 0x80000001;
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
        printf("First and Last BIT is ON\n");
    }
    else
    {
        printf("Either First or Last BIT is OFF\n");
    }
    return 0;
} 