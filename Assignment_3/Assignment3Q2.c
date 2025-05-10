////////////////////////////////////////////////////////////////////////////////
//
//  Description : Program to accept a number and print its even factors
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0) 
        {
            if(iCnt % 2 == 0)
            {
               printf("%d  ",iCnt);
     
            }
        } 
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a number: ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}
