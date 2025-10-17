///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a recursive program which display the below pattern
//                    5     4       3       2       1
//      Input             : 5
//
//      Output            : 5   4   3   2   1
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static int iCnt = 5;

    if(iCnt >= 1)
    {
        printf(" %d\t ",iCnt);
        iCnt--;
        Display();
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}