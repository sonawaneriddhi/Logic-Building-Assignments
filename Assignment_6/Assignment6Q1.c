///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to dsiplay numbers range according to condition
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo >= 50) && (iNo <100))
    {
        printf("Medium\n");
    }
    else if(iNo >= 100)
    {
        printf("Large\n");
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