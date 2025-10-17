///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a recursive program which display the below pattern
//                    a b   c   d   e   
//      Input             : 5
//
//      Output            : a   b   c   d   e 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;
    static char ch = 'a';

    if(iCnt < iNo)
    {
        printf("%c\t",ch);
        ch++;
        iCnt++;
        Display(iNo);
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