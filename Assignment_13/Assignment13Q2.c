////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept a number and display the pattern 
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    char cChar1 = 'a', cChar2 = 'A';

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1, cChar1 = 'a', cChar2 = 'A'; iCnt2 <= iCol; iCnt2++, cChar1++, cChar2++)
        {
            if((iCnt1 % 2) != 0)
            {
                printf("%c\t",cChar2);   
            }
            else
            {
                printf("%c\t",cChar1);
            }
        }
        printf("\n");
    }
}

int main()
{   
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);
    
    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}