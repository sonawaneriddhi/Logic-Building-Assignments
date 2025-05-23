///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate the difference of factors and non-factors of a number
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DiffFact(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt ) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    int iDiffFact = 0;

    if(iSumFact > iSumNonFact)
    {
        iDiffFact = iSumFact - iSumNonFact;
    }
    else
    {
        iDiffFact = iSumNonFact - iSumFact;
    }

    return iDiffFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = DiffFact(iValue);

    printf("Difference of factors and non factor is : %d\n",iRet);

    return 0;
}