///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and a character and return the first occorance of that character
//
//      Input  : Marvellous Multi OS
//               e
//      Output : 5
//
//      Input  : Marvellous Multi OS
//               W 
//      Output : -1
//
//      Input  : Marvellous Multi Os 
//               M
//      Output : 0
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        if(*str == ch)
        {
            break;
        }
        iCount++;
        str++;
    }

    if(iCnt == iCount)
    {
        iCount = -1;
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

    iRet = FirstChar(Arr,cChar);

    printf("%d",iRet);

    return 0;
}