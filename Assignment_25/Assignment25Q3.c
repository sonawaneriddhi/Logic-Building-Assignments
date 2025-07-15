////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and toggle the case
//
//      Input  : Marvellous Multi OS
//      Output : mARVELLOUS mULTI os
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str -32;
        }

        printf("%c",*str);

        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    strtoggleX(Arr);

    return 0;
}