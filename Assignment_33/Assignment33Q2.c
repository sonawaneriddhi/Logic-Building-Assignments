///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accept two number from user and display position of common ON Bit
//
//      Input  : 10 15
//      Output : 2  4
//
//      Input  : 178 154
//      Output : 2  5   8
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    int iPos = 0; 
    while((iNo1 != 0) || (iNo2 != 0))
    {
        iPos++;
        if(((iNo1 & 1) == 1) && ((iNo2 & 1) == 1))
        {
            printf("%d\t",iPos);
        }
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
    }
}

int main()
{   
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    printf("Enter first number :");
    scanf("%d",&iValue1);

    printf("Enter second number :");
    scanf("%d",&iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
} 