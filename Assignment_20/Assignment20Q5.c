///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept N numbers from user and return product of all odd elements
//
//      Input :         N :  6
//               Elements :  15     16     3     70     10      88
//      Output : 45
//
//      Input :         N :  6
//               Elements :  44     66     72     70     10      88
//      Output : 0
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Product( int iArr[], int iLength)
{
    int iCnt = 0, iProduct = 0, iEven = 0;
   
    iProduct = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((iArr[iCnt] % 2) != 0)
        {
            iProduct = iProduct * iArr[iCnt];
        }
        else
        {
            iEven ++;
        }
    }

    if(iEven == iLength)
    {
        iProduct = 0;
    }

    return iProduct;
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

    iRet = Product(p, iSize);

    printf("Product of odd elements is : %d.\n",iRet);
    
    free(p);

    return 0;
}