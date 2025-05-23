///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate meter from kilometer
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_INVALID -1

int KMToMeter(int iNo)
{
    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    int iResult = 0;

    iResult = iNo * 1000;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    if(iRet != ERR_INVALID)
    {
        printf("KM to Meter is : %d\n",iRet);
    }
    else
    {
        printf("Entered value is invalid.\n");
    }

    return 0;
}