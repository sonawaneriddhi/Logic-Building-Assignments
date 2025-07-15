/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and convert it into upper case
//
//      Input  : Marvellous Multi OS
//      Output : MARVELLOUS MULTI OS
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
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

    struprX(Arr);

    return 0;
}