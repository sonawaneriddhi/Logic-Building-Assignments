///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept N numbers from user and return its index of first occurance
//
//      Input :         N :  6
//               Elements :  85     66     3     66     93      88
//                     No : 66
//      Output : 1
//
//      Input :         N :  6
//               Elements :  85     11     3      15     11      111 
//                     No : 66 
//      Output : -1
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstOcc( int iArr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] == iNo)
        {
           break;
        }
    }

    if(iCnt == iLength)
    {
        iCnt = -1;
    }

    return iCnt;
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

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FirstOcc(p, iSize, iValue);

    if(-1 == iRet)
    {
        printf("There is no such number.\n");
    }
    else
    {
        printf("First Occurance of %d is : %d.\n",iValue,iRet);
    }

    free(p);

    return 0;
}