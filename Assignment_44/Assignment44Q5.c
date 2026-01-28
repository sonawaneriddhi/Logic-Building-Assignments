/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Write a program which accpets matrix from user and swap the contents of consequitive rows
//
//  Input : Matrix of n x n
//
//  Output: matrix with swapping
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

void SwapCol(IPPTR Arr, int iTab)
{
    int i = 0, j = 0, n = 0;
    for(i = 0 ; i < iTab; i+=2)
    {
        for(j = 0; j < iTab; j++)
        {
            int temp = Arr[i][j];
            Arr[i][j] = Arr[i+1][j];
            Arr[i+1][j] = temp;
        }
    }
}

void Display(IPPTR Arr, int iRow)
{
    int i = 0, j = 0;
      
    printf("Elements of the matrix are : \n");

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iRow; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
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

    printf("Before Swapping\n");

    Display(Arr,iRow);

    SwapCol(Arr, iRow);

    printf("After Swapping\n");

    Display(Arr,iRow);
    
    for(iCnt = 0; iCnt < iRow; iCnt++)
    {
        free(Arr[iCnt]);
    }

    free(Arr);
    
    return 0;
}