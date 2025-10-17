///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a recursive program which accepts the string from user and count number of whitespaces from it.
//                  
//      Input             : He  ll  o
//
//      Output            : 4
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Whitespace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        Whitespace(str);
    }

    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    iRet = Whitespace(arr);

    printf("Number of whitespaces are : %d\n",iRet);
    
    return 0;
}