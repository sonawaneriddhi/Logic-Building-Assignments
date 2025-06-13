///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept N numbers from user and display numbers which contains 3 digits in it
//
//      Input :         N :  6
//               Elements :  8225     665     3     76     953      858
//      Output : 665       953      858
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits( int iArr[], int iLength)
{
    int iCnt = 0, iCount = 0, iTemp = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iTemp = iArr[iCnt];
        iCount = 0;
        while(iTemp != 0)
        {
            iTemp = iTemp / 10;                 //Not originally changing the array by given by user
            iCount++;
        }
        if(iCount == 3)
        {
            printf("%d\t",iArr[iCnt]);
        }
    }
    
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
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

    Digits(p, iSize);

    free(p);

    return 0;
}

//Time Complexity : O(N + (N)^(max digits of a number))