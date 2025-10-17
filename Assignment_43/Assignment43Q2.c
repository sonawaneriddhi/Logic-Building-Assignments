///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a recursive program which accepts the number from user and return largest of its digits
//                  
//      Input             : 40576
//
//      Output            : 7
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Max(int iNo)
{
    int iDigit = 0 ; 
    static int iMax  = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;

        Max(iNo);
    }

    return iMax;
}
int main()
{
    int iValue = 0 , iRet = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    iRet = Max(iValue);

    printf("Maximum of digits is : %d\n",iRet);

    return 0;
}