/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and counts the white spaces in string
//
//      Input  : MarvellouS
//      Output : 0
//
//      Input  : MarvellouS Infosystems
//      Output : 1
//
//      Input  : MarvellouS Infosystems by Piyush Manohar Khainar
//      Output : 5
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    iRet = CountWhite(Arr);

    printf("%d",iRet);

    return 0;
}