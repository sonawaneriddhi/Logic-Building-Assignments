////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept a number and display the pattern 
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0, iCountEven = 0, iCountOdd = 0;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1,iCountEven = 2, iCountOdd = 1; iCnt2 <= iCol; iCnt2++)
        {
            if((iCnt1 % 2) != 0)
            {
                printf("%d\t",iCountEven);
                iCountEven = iCountEven + 2;
            }
            else
            {
                printf("%d\t",iCountOdd);
                iCountOdd = iCountOdd + 2;
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

//Or a method can be used to display table of two in odd rows and odd numbers in even rows