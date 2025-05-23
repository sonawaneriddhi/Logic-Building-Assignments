///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate frequency of digits which are less than 6 in it
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0,iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {   
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("Frequency of digits less than 6 is : %d\n",iRet);

    return 0;
}