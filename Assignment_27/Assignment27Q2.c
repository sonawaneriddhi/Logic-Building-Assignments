///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and copy the contents of the string in another string (Implementing strncpy())
//
//      Input  : Marvellous Multi OS
//               10
//      Output : Marvellous
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrNCpyX(char *str, char *dest, int iCnt)
{
    while((*str != '\0') && (iCnt != 0))
    {
        *dest = *str;
        str++;
        dest++;
        iCnt--;
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

    StrNCpyX(cArr1,cArr2,10);

    printf("%s",cArr2);

    return 0;
}