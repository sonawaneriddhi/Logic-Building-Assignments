///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a genric program which accept N values from user and search the last occurence of any specific values.
//
//      Input             : Arr[] = {11,21,51,11,51,101,111,11,21}
//                          11
//
//      Output            : 8
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *Arr , int iSize , T No)
{
    int iCnt = 0 , iCount = 0;

    for(iCnt = iSize; iCnt >= 0 ; iCnt--)
    {
        if(Arr[iCnt] == No)
        {
            return iCnt;
        }
    }
}

int main()
{
    int iRet = 0;
    int Arr[] = {11,21,51,11,51,101,111,11,21};

    iRet = SearchLast(Arr,9,11);

    cout<<"last Occurence is : "<<iRet+1<<"\n";

    return 0;
}