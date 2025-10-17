///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Complete below code snippet by writing definations of below function.
//
//                        : SearchLast() :- Search last occurence of number.
//                        : EvenCount()  :- Count Even elements.
//                        : OddCount()   :- Count Odd elements.
//                        : SummAll()    :- Sum of all elements.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

class Array
{
    protected : 
        int *Arr;
        int Size;

    public :
    
        Array(int Value = 10)
        {
            cout<<"Inside Constructor\n";
            this->Size = Value;
            this->Arr = new int[Size];
        }

        Array(Array &ref)
        {
            cout<<"Inside Copy Constructor\n";
            this->Size = ref.Size;
            this->Arr = new int[this->Size];

            for(int i = 0 ; i < Size ; i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        }

        ~Array()
        {
            cout<<"Inside Destructor\n";
            delete[] Arr;
        }

        inline void Accept();
        inline void Display();

        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

void Array :: Accept()
{
    cout<<"Enter the elements:\n";
    for(int i = 0 ; i < Size ; i++)
    {
        cin >> Arr[i];
    }
}

void Array :: Display()
{
    cout<<"Elements of array are:\n";
    for(int i = 0 ; i < Size ; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

int Array :: SearchLast(int No)
{
    int iPos = -1;

    for(int i = 0 ; i < Size ; i++)
    {
        if(Arr[i] == No)
        {
            iPos = i;
        }
    }

    return iPos;
}

int Array :: EvenCount()
{
    int iCnt = 0;

    for(int i = 0 ; i < Size ; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int Array :: OddCount()
{
    int iCnt = 0;

    for(int i = 0 ; i < Size ; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int Array :: SumAll()
{
    int iSum = 0;

    for(int i = 0 ; i < Size ; i++)
    {
        iSum += Arr[i];
    }

    return iSum;
}

int main()
{
    Array obj1(5);

    obj1.Accept();
    obj1.Display();

    cout << "Last occurrence of 5 is at index: " << obj1.SearchLast(5) << "\n";
    cout << "Even elements count: " << obj1.EvenCount() << "\n";
    cout << "Odd elements count: " << obj1.OddCount() << "\n";
    cout << "Sum of all elements: " << obj1.SumAll() << "\n";

    return 0;
}
 