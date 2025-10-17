///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : WWrite a genric program which accept N values from user and return addition of that N values.
//
//      Input List      : Arr[] = {10,20,30,40,50,60};
//                        Brr[] = {10.44,20.85,30.82,40.41};
//
//      Output          : 210
//                        102.52
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T AddNNumber(T *Arr , int iSize)
{
    T sum  = 0;
    int i = 0;

    if(iSize < 0)
    {
        printf("Invallid Input!!!");
        return -1;
    }    

    for(i = 0; i< iSize; i++)
    {
        sum = sum + Arr[i];
    }

    return sum;
}

int main()
{
    int iRet = 0;
    double dRet = 0.0; 

    //Inputs
    int Arr[] = {10,20,30,40,50,60};

    double Brr[] = {10.44,20.85,30.82,40.41};

    iRet = AddNNumber(Arr , 6);

    cout<<"Summation is : "<< iRet <<"\n";

    dRet = AddNNumber(Brr , 4);

    cout<<"Summation is : "<< dRet <<"\n";

    return 0;
}