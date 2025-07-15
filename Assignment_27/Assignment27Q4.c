///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and copy small characters from that string to another string
//
//      Input  : Marvellous Multi OS
//      Output : arvellousulti
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpySmall(char *str, char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))          //Copy small madhe ' ' copy hot nahi , jar karaychi asel tar separate notation dyayla lagel (*str == ' ')
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

    StrCpySmall(cArr1,cArr2);

    printf("%s",cArr2);

    return 0;
}