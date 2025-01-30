#include <iostream>

using namespace std;

class Base
{
    public:
        int i,j;
        void fun()
        {
            cout<<"Inside Base of Fun \n";
        }
};

class Derived: public Base 
{
    public:
         int x,y;   
         void fun()
         {
            cout<<"Inside Derived fun\n";
         }

};

int main()

{
    Derived dobj;
    Base bobj;
    Base *bprt = NULL;
    Derived *dptr = NULL;

    bptr = &bobj;    // No Casing
    dptr = &dobj;     //No Casting
    bptr = &dobj;     //UpCasting
    dptr = &bobj;     //Downcasting
    

    return 0;
}