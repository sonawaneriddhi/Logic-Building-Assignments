///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept charachter from user and check wether it is a character or not
//
//      Input  : F
//      Output : True
//
//      Input  : &
//      Output : False
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL CheckAlpha( char ch)
{
    BOOL bFlag = FALSE;

    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = CheckAlpha(cValue);

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