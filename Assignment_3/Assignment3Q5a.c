////////////////////////////////////////////////////////////////////////////////
//
//  Description : Program to check if the character is vowel or not
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayVowel(char cChar)
{
     if(cChar == 'a' || cChar == 'e' || cChar == 'i' || cChar == 'o' || cChar == 'u' ||
        cChar == 'A' || cChar == 'E' || cChar == 'I' || cChar == 'O' || cChar == 'U')
     {
        printf("TRUE\n");
     }
     else
     {
        printf("FALSE\n");  
     }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character : ");
    scanf("%c",&cValue);

    DisplayVowel(cValue);

    return 0;
}
