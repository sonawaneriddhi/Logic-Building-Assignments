///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept N numbers from user and return the difference of largest and smallest number 
//
//      Input :         N :  6
//               Elements :  85     66     3     66     93      88
//      Output : 90 (93 - 3)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference( int iArr[], int iLength)
{
    int iCnt = 0, iSmall = 0, iLarge = 0, iDiff = 0;

    iSmall = iArr[0];                           
    iLarge = iArr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] < iSmall)
        {
            iSmall = iArr[iCnt];
        }
        else if(iArr[iCnt] > iLarge)
        {
            iLarge = iArr[iCnt];
        }
    }

    iDiff = iLarge - iSmall;

    return iDiff;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
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

    iRet = Difference(p, iSize);

    printf("Difference of largest to smallest is : %d\n",iRet);
    
    free(p);

    return 0;
}

//Tie complexity : O(2N)