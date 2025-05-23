///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate difference of even digits and odd digits
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0,iCnt = 0;
    int iSum1 = 0, iSum2 = 0,iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {   
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo / 10;
    }

    iDiff = iSum1 - iSum2;

    return iDiff;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference of even digit and odd digit is : %d\n",iRet);

    return 0;
}