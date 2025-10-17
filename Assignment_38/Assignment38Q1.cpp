///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a genric program to multiply two numbers.
//
//      Input List      : 10,11
//                        28.9,19.4
//
//      Output          : 110 
//                        560.66
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Multiply(T No1 , T No2)
{
    T ans;

    ans = No1 * No2;

    return ans;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Multiply(10,11);
    cout<<"Multiplication is : "<<iRet<<"\n";

    fRet = Multiply(28.9f,19.4f);
    cout<<"Multiplication is : "<<fRet<<"\n";

}