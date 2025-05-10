////////////////////////////////////////////////////////////////////////////////
//
//  Description : Program to convert the case of the character
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{
    if(cValue == toupper(cValue))
    {
        printf("%c\n",tolower(cValue));
    }
    else if(cValue == tolower(cValue))
    {
        printf("%c\n",toupper(cValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
