#include<iostream>
using namespace std;
template <class T>
class Array
{
    public:
    int *Arr;
    int Size;

    Array(int no)
    {
        Size = no;
        Arr = new int[Size];
    }
    ~Array()
    {
        delete[]Arr;
    }

    void accept()
    {
        cout<<"Enter the elements\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < Size; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    void Display()
    {
        cout<<"Elements of the Array are:\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt<Size;iCnt++)
        {
           cout<<Arr[iCnt]<<"\n";
        }
    }
}

int main()
{
    Array aobj(5);
    aobj.accept();
    aobj.Display();

    return 0;
}