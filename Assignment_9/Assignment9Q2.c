///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to check wether the number has zero in it or not
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    BOOL bFlag = FALSE;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {   
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bFlag = TRUE;
        }
        iNo = iNo / 10;
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero.\n");
    }
    else
    {
        printf("It doesn't contain Zero.\n");
    }

    return 0;
}