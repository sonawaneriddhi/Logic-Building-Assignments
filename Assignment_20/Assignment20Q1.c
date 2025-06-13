///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept N numbers from user and check wether it is present or not
//
//      Input :         N :  6
//               Elements :  85     66     3     66     93      88
//                     No : 66
//      Output : 66 is present
//
//      Input :         N :  6
//               Elements :  85     11     3      15     11      111
//                     No : 66
//      Output : 66 is not present
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check( int iArr[], int iLength, int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] == iNo)
        {
           bFlag = TRUE;
        }
    }
    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;
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

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = Check(p, iSize, iValue);

    if(TRUE == bRet)
    {
        printf("%d is present.\n",iValue);
    }
    else
    {
        printf("%d is not present.\n",iValue);
    }

    free(p);

    return 0;
}