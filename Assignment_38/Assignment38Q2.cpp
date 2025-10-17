///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a genric program to find the largest of 3 numbers.
//
//      Input List      : 11,21,51
//                        215.6,19.2,24.6
//
//      Output          : 51
//                        24.6
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Max(T No1 , T No2 , T No3)
{
    T largest;

    if((No1 > No2) && (No1 > No3))
    {
        largest = No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        largest = No2;
    }
    else
    {
        largest = No3;
    }

    return largest;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Max(11,21,51);
    cout<<"Maximum is : "<<iRet<<"\n";
    fRet = Max(15.6f,19.2f,24.6f);
    cout<<"Maximum is : "<<fRet<<"\n";
}