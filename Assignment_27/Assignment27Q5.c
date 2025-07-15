/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and concat the string (implementing strcat() function)
//
//      Input  : Marvellous Infosystems
//               Logic Building
//      Output : Marvellous Infosystems Logic Building
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCatX(char *str, char *dest)
{
    while(*str != '\0')
    {
        str++;
    }

    while(*dest != '\0')
    {
        *str = *dest;
        str++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char cArr1[50] = "Marvellous Infosystems ";
    char cArr2[30] = "Logic Building";
    char cChar = '\0';

    StrCatX(cArr1,cArr2);

    printf("%s",cArr1);

    return 0;
}