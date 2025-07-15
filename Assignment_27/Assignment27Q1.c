///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and copy the contents in another string (implimenting strcpy() function)
//
//      Input  : Marvellous Multi OS
//      Output : Marvellous Multi OS    (in another string)
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyX(char *str, char *dest)
{
    while(*str != '\0')
    {
        *dest = *str;
        str++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char cArr1[20] = {'\0'};
    char cArr2[20] = {'\0'};
    char cChar = '\0';

    printf("Enter string : ");
    scanf("%[^'\n]s",cArr1);

    StrCpyX(cArr1,cArr2);

    printf("%s",cArr2);

    return 0;
}