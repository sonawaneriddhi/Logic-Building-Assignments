////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to display number line
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void NumberLine(int iNo)
{
    if(iNo > 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt = iNo; iCnt <= (-iNo); iCnt++)
    {
        printf(" %d ",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    NumberLine(iValue);

    return 0;
}