/////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Program to accept 2 number and print number 1 for number 2 times
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt=1; iCnt <= iNo2; iCnt++)
    {
        printf("%d ",iNo1);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter a number : ");
    scanf("%d",&iValue);

    printf("\nEnter a frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    
    return 0;
}
