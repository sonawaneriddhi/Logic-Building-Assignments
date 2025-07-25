///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept N numbers from user and return the largest number 
//
//      Input :         N :  6
//               Elements :  85     66     3     66     93      88
//      Output : 93
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Maximum( int iArr[], int iLength)
{
    int iCnt = 0, iLarge = 0;

    iLarge = iArr[0];                            //The first element is always the largest for no run cases

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] > iLarge)
        {
            iLarge = iArr[iCnt];
        }
    }

    return iLarge;
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

    iRet = Maximum(p, iSize);

    printf("Largest of all elements is : %d\n",iRet);
    
    free(p);

    return 0;
}

//Time complexity  : O(2N)