///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to display the pattern on screen
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" * ");
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" # ");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}