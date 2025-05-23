///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to display the tabe of given number in reverse
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0, iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}