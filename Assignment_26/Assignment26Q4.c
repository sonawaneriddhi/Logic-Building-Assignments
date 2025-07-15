///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and a character and return the last occorance of that character
//
//      Input  : Marvellous Multi OS
//               M
//      Output : 11     
//
//      Input  : Marvellous Multi OS
//               W 
//      Output : -1
//
//      Input  : Marvellous Multi Os 
//               e
//      Output : 4
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;                  //Indicating there is no occorance in first place

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;
    }

    return iPos;
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

    iRet = LastChar(Arr,cChar);

    printf("%d",iRet);

    return 0;
}