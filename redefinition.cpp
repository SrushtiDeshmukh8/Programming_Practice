#include <iostream>

using namespace std;

class Base
{
    public:
        void fun()
        {
            cout<<"Inside Base of Fun \n";
        }
};

class Derived: public Base 
{
    public:
         void fun()
         {
            cout<<"Inside Derived fun\n";
         }

};

int main()

{
    cout<<sizeof(Base)<<"\n";
    Derived dobj;
    dobj.fun();
    Base bobj;
    bobj.fun();

    return 0;
}