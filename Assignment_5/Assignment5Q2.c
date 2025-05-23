////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to display numbers till the entered number 
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Numbers(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" %d ",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    Numbers(iValue);

    return 0;
}