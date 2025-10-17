///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a recursive program which accepts the number from user and return its reverse number
//                  
//      Input             : 987
//
//      Output            : 789
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0 ; 
    static int iReverse = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = iReverse * 10 + iDigit;
        iNo = iNo / 10;

        Reverse(iNo);
    }

    return iReverse;
}
int main()
{
    int iValue = 0 , iRet = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    iRet = Reverse(iValue);

    printf("Reverse Number is : %d\n",iRet);

    return 0;
}