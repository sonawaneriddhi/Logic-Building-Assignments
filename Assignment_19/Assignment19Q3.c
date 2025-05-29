///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept N numbers from user and check wether it contains 11 or not
//
//      Input :         N :  6
//               Elements :  85     66     3     80     93      88
//      Output : 11 is absent.
//
//      Input :         N :  6
//               Elements :  85     66     11      80     93      88
//      Output : 11 is present.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check( int iArr[], int iLength)
{
    int iCnt = 0;
    BOOL bResult = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] == 11)
        {
            bResult = TRUE;
        }
    }

    return bResult;
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    bRet = Check(p,iSize);

    if(TRUE == bRet)
    {
        printf("11 is present.\n");
    }
    else
    {
        printf("11 is absent.\n");
    }

    free(p);

    return 0;
}