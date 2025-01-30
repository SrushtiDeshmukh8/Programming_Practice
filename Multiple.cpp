#include <iostream>

using namespace std;

class Base1
{
    public:
        int i ,j;
        Base1()
        {
            cout<<"Inside Base1 Constructor\n";
            i=10;
            j=20;
        }
        ~Base1()
        {
            cout<<"Inside Base1 Destructor\n"; 
        }
        void Fun()
        {
            cout<<"Inside fun of Base1\n"; 

        }
};

class Base2
{
    public:
        int x ,y;
        Base2()
        {
            cout<<"Inside Base2 Constructor\n";
            x=30;
            y=40;
        }
        ~Base2()
        {
            cout<<"Inside Base2 Destructor\n"; 
        }
        void Gun()
        {
            cout<<"Inside Gun of Base2\n"; 

        }
};

class Derived : public Base2,public Base1
{
    public:
         int a,b;
         Derived()
         {
            cout<<"Inside Derived Constructor\n"; 
            a=50;
            b=60;
         }
         ~Derived()
         {
            cout<<"Inside Derived Destructor\n";
         }
         void sun()
         {
            cout<<"Inside Derived Sun\n";
         }
};

int main()
{
    Derived dobj;
    cout<<sizeof (Base1)<<"\n";
    cout<<sizeof (Base2)<<"\n";
    cout<<sizeof (Derived)<<"\n";

    return 0;
}