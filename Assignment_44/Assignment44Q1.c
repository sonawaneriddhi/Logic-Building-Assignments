/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Write a program which accpets matrix from user and return the addition of diagonal elements
//
//  Input : Matrix of n x n
//
//  Output: Summation of diagonal elements (n)
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

int SumDiagonal(IPPTR Arr, int iTab)
{
    int iCnt1 = 0, iCnt2 = 0, iSum = 0;

    for(iCnt1 = 0; iCnt1 < iTab; iCnt1++)
    {
        for(iCnt2 = 0; iCnt2 < iTab ; iCnt2++)
        {
            if(iCnt1 == iCnt2)
            {
                iSum += Arr[iCnt1][iCnt2];
            }
        }
    }

    return iSum;
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

    iRet = SumDiagonal(Arr, iRow);
    
    printf("Sum of diagonal elements are : %d",iRet);

    for(iCnt = 0; iCnt < iRow; iCnt++)
    {
        free(Arr[iCnt]);
    }

    free(Arr);
    
    return 0;
}