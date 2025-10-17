///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a recursive program which accepts the number from user and return smallest of its digits
//                  
//      Input             : 987
//
//      Output            : 7
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Min(int iNo)
{
    int iDigit = 0 ; 
    static int iMin  = 9;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10;

        Min(iNo);
    }

    return iMin;
}
int main()
{
    int iValue = 0 , iRet = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    iRet = Min(iValue);

    printf("Minimum of digits is : %d\n",iRet);

    return 0;
}