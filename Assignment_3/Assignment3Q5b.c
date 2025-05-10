////////////////////////////////////////////////////////////////////////////////
//
//  Description : Program to check if the character is vowel or not
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckVowel(char cChar)
{
     char Vowel[10] = {'a','e','i','o','u','A','E','I','O','U'};
     int iCnt = 0;
     
     for(iCnt = 0; iCnt <= 10; iCnt++)
     {
       if(cChar == Vowel[iCnt])
       {
         return TRUE;
       }
     }
     return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter a character : ");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);
    
    if(bRet == TRUE)
    {
       printf("TRUE\n");
    }
    else if(bRet == FALSE)
    {
       printf("FALSE\n");
    }
    
    return 0;
}
