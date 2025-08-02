///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accept a number from user and count number of ON bits without using / or % operator
//
//      Input  : 11
//      Output : 3
//
//      Input  : 682
//      Output : 5
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iCount++;
        }
        iNo = iNo>>1;
    }

    return iCount;
}

int main()
{   
    UINT iValue = 0;
    int iPos = 0;
    int iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("%d\n",iRet);

    return 0;
} 