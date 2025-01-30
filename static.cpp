#include<iostream>

using namespace std;

class Demo
{
    public:
        int i,j;
        static int k;
        
        Demo()
        {
            i=10;
            j=20;
        }
        void Fun()
        {
            cout<<"Inside Non-Static fun\n";
            cout<<this->i<<"\n";
            cout<<this->j<<"\n";
            cout<<k<<"\n";
        }
        static void Gun()
        {
            cout<<"Inside Static Gun\n";
            cout<<k<<"\n";
        }

};

int Demo:: k=30; 

int main()
{
    cout<<"Value of K:"<<Demo::k<<"\n";
    Demo::Gun();
    Demo obj1;
    Demo obj2;

    obj1.Fun();
    obj1.Gun();

    obj2.Fun();
    obj2.Gun();

    cout<<"Value of k using object:"<<obj1.k<<"\n";
    cout<<"Value of k using object:"<<obj2.k<<"\n";



    return  0;
}