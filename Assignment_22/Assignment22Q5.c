///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept division from user and display Schedule
//
//      Input  : c
//      Output : Your exam is at 9.20 AM
//
//      Input  : D
//      Output : Ypur exam is at 10.30 AM
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplaySchedule(char cChar)
{
    int iCnt = 0, iDisplacement = 0;

    if((cChar >= 'a') && (cChar <= 'z'))
    {
        iDisplacement = -32;
    }

    cChar = cChar + iDisplacement;

    if(cChar == 'A')
    {
        printf("Your exam is at 7 AM\n");
    }
    else if(cChar == 'B')
    {
        printf("Your exam is at 8.30 AM\n");
    }
    else if(cChar == 'C')
    {
        printf("Your exam is at 9.20 AM\n");
    }
    else if(cChar == 'D')
    {
        printf("Your exam is at 10.30 AM\n");
    }
    else
    {
        printf("Enter division in between A-D\n");
        return;
    }

    return;
}

int main()
{
    char cValue = '\0';

    printf("Enter division : ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;                                                                                                                                                                                                                                      
}