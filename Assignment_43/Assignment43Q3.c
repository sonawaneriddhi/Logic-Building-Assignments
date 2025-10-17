///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a recursive program which accepts the string from user and count number of small characters from it.
//                  
//      Input             : Hell o
//
//      Output            : 4
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }

        str++;

        Small(str);
    }

    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    iRet = Small(arr);

    printf("Number of small characters are : %d\n",iRet);
    
    return 0;
}