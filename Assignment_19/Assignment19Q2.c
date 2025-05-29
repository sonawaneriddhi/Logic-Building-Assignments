///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept N numbers from user and calculate the difference between frequency of even and odd number
//
//      Input :         N :  7
//               Elements :  85     66     3     80     93      88     90
//      Output : 1 (4 - 3)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DiffFrequency( int iArr[], int iLength)
{
    int iCnt = 0, iFreqEven = 0, iFreqOdd = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((iArr[iCnt] % 2) == 0)
        {
           iFreqEven++;
        }
        else
        {
            iFreqOdd++;
        }
    }

    iDiff = iFreqEven - iFreqOdd;

    return iDiff;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = DiffFrequency(p,iSize);

    printf("Difference between Frequency of even and odd numbers is : %d\n",iRet);

    free(p);

    return 0;
}