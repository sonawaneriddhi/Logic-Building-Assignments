///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a genric program which accept N values from user and return smallest value amongst of that N values.
//
//      Input List      : Arr[] = {10,20,30,40,50,60};
//                        Brr[] = {10.44,20.85,30.82,40.41};
//
//      Output          : 10
//                        10.44
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>

T Max(T *Arr , int iSize)
{
    T Min  = 0;
    int i = 0;

    if(iSize < 0)
    {
        printf("Invalid Input!!!");
        return -1;
    }    

    Min = Arr[0];

    for(i = 0; i< iSize; i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }

    return Min;
}
int main()
{
    int iRet = 0;
    double dRet = 0.0; 

    //Inputs
    int Arr[] = {10,20,30,40,50,60};

    double Brr[] = {10.44,20.85,30.82,40.41};

    iRet = Max(Arr , 6);

    cout<<"Minimum is : "<< iRet <<"\n";

    dRet = Max(Brr , 4);

    cout<<"Minimum is : "<< dRet <<"\n";
    
    return 0;
}