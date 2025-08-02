///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accept a number and position from user and check wether bit at that position is
//                    ON or OFF
//
//      Input  : 10 2
//      Output : 2th Bit is ON
//
//      Input  : 3 2
//      Output : 2th Bit is OFF
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo, int iPos)
{
    int iMask = 1;
    iMask = iMask << (iPos - 1); 
    UINT iResult = 0;

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
    UINT iValue = 0;
    int iPos = 0;
    BOOL bRet = FALSE;

    printf("Enter a number :");
    scanf("%d",&iValue);

    printf("Enter position to check BIT :");
    scanf("%d",&iPos);

    bRet = CheckBit(iValue, iPos);

    if(bRet == TRUE)
    {
        printf("%dth Bit is ON\n",iPos);
    }
    else
    {
        printf("%dth Bit is OFF\n",iPos);
    }

    return 0;
} 