///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept N numbers from user and accept range, and Display all the elements in the range
//
//      Input :         N :  6
//                  Start :  60
//                    End :  90
//               Elements :  85     66     3     76     93      88
//      Output : 66 76 88
//
//      Input :         N :  6
//                  Start :  30
//                    End :  50
//               Elements :  85     66     3     76     93      88
//      Output : 
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Range( int iArr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if((iArr[iCnt] > iStart) && (iArr[iCnt] < iEnd))
        {
            printf("%d\t",iArr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);
    
    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

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

    Range(p, iSize, iValue1, iValue2);
    
    free(p);

    return 0;
}