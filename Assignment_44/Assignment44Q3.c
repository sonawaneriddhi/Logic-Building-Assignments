/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Write a program which accpets matrix from user and return the largest number from the both diagonals
//
//  Input : Matrix of n x n
//
//  Output: m (largest of two diagnonals)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef int * IPTR;
typedef int ** IPPTR;

void Accept(IPPTR Arr, int iRow)
{
    int i = 0, j = 0;

    printf("Enter the elements : \n");

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iRow; j++)
        {
            printf("Enter element of Mat[%d][%d] : ",i+1,j+1);
            scanf("%d",&Arr[i][j]);
            printf("\n");
        }
    }

}

int LargestDiagonals(IPPTR Arr, int iTab)
{
    int i = 0, j = 0, n = 0;
    int iMax = Arr[0][0];

    for(i = 0; i < iTab; i++)
    {
        for(j = 0; j < iTab ; j++)
        {
            n = i + j;
            if((i == j) && Arr[i][j] > iMax)
            {
                iMax = Arr[i][j];
            }
            if(n == (iTab - 1) && Arr[i][j] > iMax)
            {
                iMax = Arr[i][j];
            }
        }
    }

    return iMax;
}

int main()
{
    int iRow = 0,iCnt = 0, iRet = 0;

    IPPTR Arr = NULL;

    printf("Enter number of Rows/Columns : ");
    scanf("%d",&iRow);

    Arr = (IPPTR)malloc(sizeof(IPTR) * iRow);
    
    for(iCnt = 0; iCnt < iRow; iCnt++)
    {
        Arr[iCnt] = (IPTR)malloc(sizeof(int) * iRow);
    }

    Accept(Arr,iRow);

    iRet = LargestDiagonals(Arr, iRow);
    
    printf("Largest of both the Diagonals is : %d",iRet);

    for(iCnt = 0; iCnt < iRow; iCnt++)
    {
        free(Arr[iCnt]);
    }

    free(Arr);
    
    return 0;
}