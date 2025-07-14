/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept charachter from user and check if it is a special symbol or not (!,@,#,$,%,^,&,*)
//
//      Input  : %
//      Output : True
//
//      Input  : d
//      Output : False
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSpecial(char cChar)
{
    BOOL bFlag = FALSE;
    if((cChar >= 'A') && (cChar <= 'Z'))
   {

   }
   else if((cChar >= 'a') && (cChar <= 'z'))
   {
        
   }
   else if((cChar >= '0') && (cChar <= '9'))
   {
    
   }
   else
   {
        bFlag = TRUE;
   }

   return bFlag;
}

int main()
{
    char cvalue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character : ");
    scanf("%c",&cvalue);

    bRet = CheckSpecial(cvalue);

    if(TRUE == bRet)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}