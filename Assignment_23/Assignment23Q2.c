///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept charachter from user and display the opposite case , display itself if symbol
//
//      Input  : Q
//      Output : q
//
//      Input  : m
//      Output : M
//
//      Input  : 4
//      Output : 4
//
//      Input  : %
//      Output : %
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char cChar)
{
    int iDisplacement = 0;
    if((cChar >= 'A') && (cChar <= 'Z'))
    {
        iDisplacement = 32;
    }
    else if((cChar >= 'a') && (cChar <= 'z'))
    {
        iDisplacement = -32;
    }

    cChar = cChar + iDisplacement;

    printf("%c",cChar);
}

int main()
{
    char cvalue = '\0';

    printf("Enter a character : ");
    scanf("%c",&cvalue);

    Display(cvalue);

    return 0;
}