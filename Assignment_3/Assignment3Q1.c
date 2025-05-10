////////////////////////////////////////////////////////////////////////////////
//
//  Description : Program to accept a number and print that much even number
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Print(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0 ;
    int evenNo = 0;

    for (iCnt =  1; iCnt <= iNo; iCnt++)
    {
        evenNo += 2;
        printf("%d  ",evenNo);
    }

}

int main()
{
   int iValue = 0;

   printf("Enter a number: ");
   scanf("%d",&iValue);

   Print(iValue);

   return 0;

}