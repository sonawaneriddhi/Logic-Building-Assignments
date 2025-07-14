/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Accept string from user and calculate the diffrence in small characters and capital characters
//
//      Input  : MarvellouS
//      Output : 6 (8 - 2)
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iCount1 = 0;
    int iCount2 = 0;
    int iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
        str++;
    }

    iDiff = iCount2 - iCount1;
    return iDiff;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n]s",Arr);

    iRet = Difference(Arr);

    printf("%d", iRet);

    return 0;
}