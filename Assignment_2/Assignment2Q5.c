////////////////////////////////////////////////////////////////////////////////
//
//  Description : Program to check if the number is even or odd
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
   if(iNo % 2 == 0)
   {
       return TRUE;
   }
   else
   {
       return FALSE;
   }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Entered number is an Even Number.\n");
    }
    else if(bRet == FALSE)
    {
        printf("Entered number is an Odd Number.\n");
    }
    
    return 0;
}
