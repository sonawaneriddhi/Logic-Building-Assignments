///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a genric program which accept N values from user and search the first occurence of any specific values.
//
//      Input             : Arr[] = {11,21,51,11,51,101,111,11,21}
//                          51
//
//      Output            : 2
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *Arr , int iSize , T No)
{
    int iCnt = 0 , iCount = 0;

    for(iCnt = 0; iCnt <= iSize ; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            return iCnt;
        }
    }

    if(iCnt == 10)
    {
        return -1;
    }
}

int main()
{
    int iRet = 0;
    int Arr[] = {11,21,51,11,51,101,111,11,21};

    iRet = SearchFirst(Arr,9,51);

    if(iRet != -1)
    {
        cout<<"First occurence is : "<<iRet<<"\n";
    }
    else
    {
        cout<<"No occurence";
    }

    return 0;
}