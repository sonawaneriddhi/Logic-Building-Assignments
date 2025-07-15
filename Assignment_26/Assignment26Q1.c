///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and a character and check wether the character is present in the string or not
//
//      Input  : Marvellous Multi OS
//               e
//      Output : TRUE
//
//      Input  : Marvellous Multi OS
//               W 
//      Output : FALSE
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkChar(char *str, char ch)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = TRUE;
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[20] = {'\0'};
    char cChar = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    printf("Enter character to be searched : ");
    scanf(" %c",&cChar);

    bRet = ChkChar(Arr,cChar);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}