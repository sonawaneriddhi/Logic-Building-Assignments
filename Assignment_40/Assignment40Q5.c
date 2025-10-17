///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a recursive program which display the below pattern
//                    a     b       c       d       e
//      Input             : 5
//
//      Output            : a   b   c   d   e
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo,char ch)
{
    static int iCnt = 0;

    if(iCnt < iNo)
    {
        printf(" %c\t ",ch);
        iCnt++;
        ch++;
        Display(iNo,ch);
    }
}

int main()
{

    int iValue = 0;

    char ch = 'a';
    
    printf("Enter the frequency : ");
    scanf("%d",&iValue);
    Display(iValue,ch);

    return 0;
}