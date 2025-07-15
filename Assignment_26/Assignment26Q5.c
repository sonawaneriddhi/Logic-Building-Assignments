/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and reverse the string in place
//
//      Input  : abcd
//      Output : dcba
//
//      Input  : abba
//      Output : abba
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrrevX(char *str)
{
    int iCount = 0;
    int iCnt = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    str--;

    for(iCnt = 0; iCnt <= iCount; iCnt++)
    {
        printf("%c",*str);
        str--;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    StrrevX(Arr);

    return 0;
}