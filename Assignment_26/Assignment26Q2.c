///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and a character and return the frequency of that chacater
//
//      Input  : Marvellous Multi OS
//               e
//      Output : 1
//
//      Input  : Marvellous Multi OS
//               W 
//      Output : 0
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cChar = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    printf("Enter character to be searched : ");
    scanf(" %c",&cChar);

    iRet = CountChar(Arr,cChar);

    printf("Character Frequency is : %d",iRet);

    return 0;
}