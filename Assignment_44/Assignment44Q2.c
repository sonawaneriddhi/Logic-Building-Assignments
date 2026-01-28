/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Write a program which accpets matrix from user and a number and return the frequency of that number
//
//  Input : Matrix of n x n
//          m
//
//  Output: Frequency of m (n)
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

int Frequncy(IPPTR Arr, int iTab, int iNo)
{
    int i = 0, j = 0, iFreq = 0;

    for(i = 0; i < iTab; i++)
    {
        for(j = 0; j < iTab ; j++)
        {
            if(Arr[i][j] == iNo)
            {
                iFreq++;
            }
        }
    }

    return iFreq;
}

int main()
{
    int iRow = 0,iCnt = 0, iRet = 0, iNo = 0;

    IPPTR Arr = NULL;

    printf("Enter number of Rows/Columns : ");
    scanf("%d",&iRow);

    Arr = (IPPTR)malloc(sizeof(IPTR) * iRow);
    
    for(iCnt = 0; iCnt < iRow; iCnt++)
    {
        Arr[iCnt] = (IPTR)malloc(sizeof(int) * iRow);
    }

    Accept(Arr,iRow);

    printf("Enter the number you want frequency of : ");
    scanf("%d",&iNo);

    iRet = Frequncy(Arr, iRow,iNo);
    
    printf("Frequency of %d is : %d",iNo,iRet);

    for(iCnt = 0; iCnt < iRow; iCnt++)
    {
        free(Arr[iCnt]);
    }

    free(Arr);
    
    return 0;
}