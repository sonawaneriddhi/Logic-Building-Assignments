///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept N numbers from user and calculate the frequency of entered No.
//
//      Input :         N :  6
//               Elements :  85     66     3     66     93      88
//                     No : 66
//      Output : 2
//
//      Input :         N :  6
//               Elements :  85     11     3      15     11      111 
//      Output : 0
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency( int iArr[], int iLength, int iNo)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] == iNo)
        {
           iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
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

    printf("Enter the number whose frequency is required : ");
    scanf("%d",&iValue);

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency of %d is : %d\n",iValue,iRet);

    free(p);

    return 0;
}