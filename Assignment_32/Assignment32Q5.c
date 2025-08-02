///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accept a number from user and toggle the first and last nibble
//
//      Input  : 3489660933
//      Output : 536870922
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xf000000f;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{   
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("%d\n",iRet);

    return 0;
} 

//Doubt : 1 takla tar -ve number yeto (in short chhote number takle tar negative output yetoy)