///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to display the tabe of given number
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iNo * iCnt;
        printf(" %d ",iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}