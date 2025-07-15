///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and copy capital characters from that string to another string
//
//      Input  : Marvellous Multi OS
//      Output : MMOS
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyCap(char *str, char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str;
            dest++;
        }
        str++;
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

    StrCpyCap(cArr1,cArr2);

    printf("%s",cArr2);

    return 0;
}