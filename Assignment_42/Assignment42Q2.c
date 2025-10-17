///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a recursive program which accepts the number from user and return summation of its digits
//                 
//      Input             : 987
//
//      Output            : 24
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Sum(int iNo)
{
    int iDigit = 0 ; 
    static int iSum  = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        Sum(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    iRet = Sum(iValue);

    printf("Summation of digits is : %d\n",iRet);

    return 0;
}