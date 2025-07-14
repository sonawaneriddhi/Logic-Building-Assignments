///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept charachter from user and check wether it is digit or not
//
//      Input  : 7
//      Output : True
//
//      Input  : d
//      Output : False
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL CheckDigit( char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= '0') && (ch <= '9'))
    {
        bFlag = TRUE;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character : ");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);

    if(TRUE == bRet)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");    
    }

    return 0;
}
