/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Write a program which accpets matrix from user and displays the sum of every column
//
//  Input : Matrix of n x n
//
//  Output: a   b   c   d.........(n times) (sum of column 0 1 2 .....n)
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

void SumColumns(IPPTR Arr, int iTab)
{
    int i = 0, j = 0, n = 0;
    int iMax = Arr[0][0];

        for(j = 0 ; j < iTab; j++)
        {
            int iSum = 0;
            for(i = 0; i < iTab ; i++)
            {
                
               iSum = iSum + Arr[i][j];      
            }

            printf("Sum of Column %d is : %d\n",j+1,iSum);
        }
}

int main()
{
    int iRow = 0,iCnt = 0;

    IPPTR Arr = NULL;

    printf("Enter number of Rows/Columns : ");
    scanf("%d",&iRow);

    Arr = (IPPTR)malloc(sizeof(IPTR) * iRow);
    
    for(iCnt = 0; iCnt < iRow; iCnt++)
    {
        Arr[iCnt] = (IPTR)malloc(sizeof(int) * iRow);
    }

    Accept(Arr,iRow);

    SumColumns(Arr, iRow);
    
    for(iCnt = 0; iCnt < iRow; iCnt++)
    {
        free(Arr[iCnt]);
    }

    free(Arr);
    
    return 0;
}