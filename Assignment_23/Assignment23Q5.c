/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept charachter from user and display its ASCII value in decimal, octal and hexagonal format
//
//      Input  : A
//      Output : Decimal    65
//               Ocatl      0101
//               Hexagonal  0X41
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char cChar)
{
    printf("Decimal     :\t%d\n",cChar);
    printf("Octal       :\t%o\n",cChar);
    printf("Hexadecimal :\t%x\n",cChar);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}