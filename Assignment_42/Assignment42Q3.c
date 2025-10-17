///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a recursive program which accepts the string from user and count number of characters.
//                  
//      Input             : Riddhi
//
//      Output            : 6 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int StrLen(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        StrLen(str);
    }

    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%s",arr);

    iRet = StrLen(arr);

    printf("Number of characters are : %d\n",iRet);

    return 0;
}