///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program to check wether the 15th BIT is ON or OFF.
//
//      Input  : 
//      Output : 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
 
BOOL CheckBit(int iNo)
{
    int iMask = 0x000000008; // 4th position
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{   
    int iValue = 0;
    bool bRet = FALSE;

    cout<<"Enter a number : ";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(TRUE == bRet)
    {
        cout<<"4th Bit is ON\n";
    }
    else
    {
        cout<<"4th Bit is OFF\n";
    }

    return 0;
} 