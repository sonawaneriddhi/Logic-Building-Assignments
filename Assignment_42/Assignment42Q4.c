///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a recursive program which accepts the number from user and return its factorial.
//        
//      Input             : 8
//
//      Output            : 40320
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Factorial(int iNo)
{
    static int iFact = 1;

    if(iNo > 0)
    {
        iFact = iFact * iNo;
        Factorial(iNo - 1);
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);
    
    return 0;
}