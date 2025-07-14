/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and displays it in reverse order
//
//      Input  : MarvellouS
//      Output : SuollevraM
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    for(iCount = iCount;iCount>= 0; iCount--)
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

    Reverse(Arr);

    return 0;
}