///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate area of circle
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define PI 3.14
#define ERR_INVALID -1

double CircleArea(float fRadius)
{
    if(fRadius < 0)
    {
        return ERR_INVALID;
    }

    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    if(dRet != ERR_INVALID)
    {
        printf("Area of circle is : %.4f\n",dRet);
    }
    else
    {
        printf("Entered value is invalid.\n");
    }

    return 0;
}