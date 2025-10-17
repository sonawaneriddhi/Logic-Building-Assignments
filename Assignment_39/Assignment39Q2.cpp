///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description :Write a genric program which accept N values from user and count the frequency of specific values.
//
//      Input             : Arr[] = {11,21,51,11,51,101,111,11,21}
//                          11
//
//      Output            : 3
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
int Frequency(T *Arr , int iSize , T No)
{
    int iCnt = 0 , iCount = 0;

    for(iCnt = 0; iCnt <= iSize ; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    int Arr[] = {11,21,51,11,51,101,111,11,21};

    iRet = Frequency(Arr,9,11);

    cout<<"Frequency is : "<< iRet <<"\n";

    return 0;
}