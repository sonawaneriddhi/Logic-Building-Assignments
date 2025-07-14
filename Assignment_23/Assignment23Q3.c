///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept charachter from user and if capital display characterts till Z, if lower display characters till a in reverse
//
//      Input  : Q
//      Output : Q R S T U V W X Y Z
//
//      Input  : m
//      Output : m l k j i h g f e d c b a
//
//      Input  : 4
//      Output : 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char cChar)
{
    int iCnt = 0;

    if((cChar >= 'A') && (cChar <= 'Z'))
    {
        for(iCnt = cChar; cChar <= 'Z'; iCnt++,cChar++)
        {
            printf("%c\t", iCnt);
        }  
    }
    else if((cChar >= 'a') && (cChar <= 'z'))
    {
        for(iCnt = cChar; cChar >= 'a'; iCnt--,cChar--)
        {
            printf("%c\t", iCnt);
        }      
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}