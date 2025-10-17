///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a genric program which accept one value and one number from user. Print that value that number of times
//
//      Input             : R, 6
//                          10, 9
//                          99.9, 3
//
//      Output            : RRRRRR
//                          10  10  10  10  10  10  10  10  10
//                          99.9    99.9    99.9
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

template<class T>
void Display(T value , int iSize)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iSize ; iCnt++)
    {
        cout<<value<<"\t";
    }

    cout<<"\n";
}
int main()
{
    Display('R',6);
    Display(10,9);
    Display(99.9,3);

    return 0;
}