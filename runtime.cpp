#include <iostream>

using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        { cout<<"Inside Base Fun \n"; }

        void gun()
        { cout<<"Inside Base gun\n"; }

        void sun()
        { cout<<"Inside Base Sun\n"; }

        void run()
        { cout<<"Inside Base run\n"; }
};

class Derived: public Base 
{
    public:
         int x,y;  

        void gun()
        { cout<<"Inside Derived gun\n"; }

        void sun()
        { cout<<"Inside Derived Sun\n"; }

        void mun()
        { cout<<"Inside Derived mun\n"; }

        void fun()
        { cout<<"Inside Derived Fun \n"; }

};

int main()

{
    Derived dobj;

    Base *bptr = NULL;

    bptr = &dobj;     //UpCasting

    bptr->fun();      //Base fun
    bptr->sun();      //Base sun
    bptr->gun();      //Base gun
   // bptr->mun();     //Derived mun
    bptr->run();     //Error
    

    return 0;
}