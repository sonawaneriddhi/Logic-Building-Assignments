///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate digits between 3 and 7
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0,iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {   
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Number of digits between 3 and 7 are : %d\n",iRet);

    return 0;
}