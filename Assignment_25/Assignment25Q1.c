/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and convert it to lower case
//
//      Input  : "Marvellous Multi OS"
//      Output : marvellous multi os
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str =  *str + 32;
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

    strlwrX(Arr);

    return 0;
}