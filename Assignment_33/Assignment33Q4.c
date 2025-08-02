///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to accept a number and two position and check wether the bit at first or bit at second is
//                    ON of OFF.
//
//      Input  : 10   3   7
//      Output : FALSE
//
//      Input  : 134   3   7
//      Output : TRUE
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo,int iPos1, int iPos2)
{
    int iMask = 1;
    iMask = iMask << (iPos1 - 1);
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }

    iMask = 1;
    iMask = iMask << (iPos2 - 1);
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
    int iPos1 = 0;
    int iPos2 = 0;

    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    printf("Enter first position : ");
    scanf("%d",&iPos1);

    printf("Enter second position : ");
    scanf("%d",&iPos2);

    bRet = CheckBit(iValue,iPos1,iPos2);

    if(TRUE == bRet)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
} 