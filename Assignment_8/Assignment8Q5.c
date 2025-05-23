///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate sqaure meter from meter
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define SQUARE_METER 0.0929
#define ERR_INVALID -1

double SquareMeter(int iNo)
{
    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    double dResult = 0.0;

    dResult = iNo * SQUARE_METER;

    return dResult;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    if(dRet != ERR_INVALID)
    {
        printf("Area in Square Meter is : %lf\n",dRet);
    }
    else
    {
        printf("Entered value is invalid.\n");
    }

    return 0;
}