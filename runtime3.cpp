#include <iostream>

using namespace std;

class Base
{
    public:
        int i,j;

        virtual void fun()         //1000
        { cout<<"Inside Base Fun \n"; }

        void gun()   //2000
        { cout<<"Inside Base gun\n"; }

        virtual void sun()    //3000
        { cout<<"Inside Base Sun\n"; }

        virtual void run()      //4000
        { cout<<"Inside Base run\n"; }
};

class Derived: public Base 
{
    public:
         int x,y;  

        void gun()     //5000
        { cout<<"Inside Derived gun\n"; }

        virtual void mun()      //6000
        { cout<<"Inside Derived mun\n"; }

        virtual void fun()      //7000
        { cout<<"Inside Derived Fun \n"; }

        void run()     //8000
        { cout<<"Inside Derived run\n"; }

};

int main()

{
    cout<<"Size of Base class:"<<sizeof(Base)<<"\n";     //8
    cout<<"Size of Derived class:"<<sizeof(Derived)<<"\n";    //16
    Derived dobj;

    Base *bptr = NULL;

    bptr = &dobj;     //UpCasting

    bptr->fun();      //Derived fun
    bptr->sun();      //Base sun
    bptr->gun();      //Base gun
   // bptr->mun();     //Derived mun
    bptr->run();     //Drived run
    

    return 0;
}