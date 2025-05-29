////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept a number and display the pattern 
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iCount = iCount + 2;
        printf("%d\t",iCount);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}