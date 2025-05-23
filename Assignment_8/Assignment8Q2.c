///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate area of rectangle
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_INVALID -1

double RectArea(float fWidth, float fHeight)
{
    if(fWidth < 0)
    {
        return ERR_INVALID;
    }
    else if(fHeight < 0)
    {
        return ERR_INVALID;
    }

    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width of Rectangle: ");
    scanf("%f",&fValue1);

    printf("Enter Height of Rectangle : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    if(dRet != ERR_INVALID)
    {
        printf("Area of Rectangle is : %.3f\n",dRet);
    }
    else
    {
        printf("Entered values are invalid.\n");
    }
    
    return 0;
}