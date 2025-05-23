///////////////////////////////////////////////////////////////////////////////////////////////////////
//    Description : Write a program to calculate celcius from fahrenheit
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_INVALID -1

double FhToCs(float fTemp)
{
    double dCelcius = 0.0;

    dCelcius = ((fTemp -32.0)*(5.0 / 9.0));

    return dCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    if(dRet != ERR_INVALID)
    {
        printf("Celcius to Fahrenheit is : %f\n",dRet);
    }
    else
    {
        printf("Entered values are invalid.\n");
    }
    
    return 0;
}