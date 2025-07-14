/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and check wether it contains vowel or not
//
//      Input  : marvellous
//      Output : TRUE
//
//      Input  : Demo
//      Output : TRUE
//
//      Input  : xyz
//      Output : FALSE
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char *str)
{
    BOOL bRet = FALSE;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            bRet = TRUE;
        }
        str++;
    }

    return bRet;
}

int main()
{
    char Arr[20] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    bRet = CheckVowel(Arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}