///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a genric program which accept N values from user and return largest value amongst of that N values.
//
//      Input List      : Arr[] = {10,20,30,40,50,60};
//                        Brr[] = {10.44,20.85,30.82,40.41};
//
//      Output          : 60
//                        40.41
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Max(T *Arr , int iSize)
{
    T Max  = 0;
    int i = 0;

    if(iSize < 0)
    {
        printf("Invalid Input!!!");
        return -1;
    }    

    Max = Arr[0];

    for(i = 0; i< iSize; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }

    return Max;
}

int main()
{
    int iRet = 0;
    double dRet = 0.0; 

    //Inputs
    int Arr[] = {10,20,30,40,50,60};

    double Brr[] = {10.44,20.85,30.82,40.41};

    iRet = Max(Arr , 6);

    cout<<"Maximum is : "<< iRet <<"\n";

    dRet = Max(Brr , 4);

    cout<<"Maximum is : "<< dRet <<"\n";
    
    return 0;
}