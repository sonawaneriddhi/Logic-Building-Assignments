///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accept a number and range of positions from user and toggle all bits in that range
//
//      Input  : 897    9    13
//      Output : 7297
//
//      Input  : 2488456    13    20
//      Output : 2754696
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask1 = ((1<<iEnd)-1);
    UINT iMask2 = ((1<<iStart-1)-1);

    UINT iResult = 0;

    UINT iMask = iMask1 ^ iMask2;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{   
    UINT iValue = 0;
    int iPos1 = 0;
    int iPos2 = 0;
    UINT iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    printf("Enter start position : ");
    scanf("%d",&iPos1);

    printf("Enter end position : ");
    scanf("%d",&iPos2);

    iRet = ToggleBitRange(iValue,iPos1,iPos2);

    printf("%d\n",iRet);

    return 0;
} 