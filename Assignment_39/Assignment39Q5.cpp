///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a genric program which accept N values from user and reverse the contents.
//
//      Input             : Arr[] = {10,20,30,40,50,60,70,80,90}
//
//      Output            : Arr[] = {90,80,70,60,50,40,30,20,10}
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

template<class T>
void Reverse(T *Arr , int iSize )
{
    int iStart = 0, iCnt = 0;
    int iEnd = iSize - 1;
    T temp ;

    while(iStart < iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;
        iStart++;
        iEnd--;
    }

    cout<<"Updated array is : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
}

int main()
{
    int iRet = 0 , iCnt = 0;
    int Arr[] = {10,20,30,40,50,60,70,80,90};
   
    for(iCnt = 0; iCnt < 9; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n";

    Reverse(Arr,9);

    return 0;
}