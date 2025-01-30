#include<iostream>

using namespace std;


class Base 
{
    public:
     int i,j;
     Base()
     {
        cout<<"Inside Base Constructor\n";
        i=10;
        j=20;
     }
     ~Base()
     {
        cout<<"Inside Base Destructor\n";
     }
     void Fun()
        { cout<<"Inside Base Fun\n";}

    };
    class Derived:public Base
    {
        public:
        int x,y;
        Derived()
        {
            cout<<"Inside Derived Costructor\n";
            x=30;
            y=40;

        }
        ~Derived()
        {
            cout<<"Inside Base Destructor\n";
        }
        void Gun()
         { cout<<"Inside Base Gun\n";}

    };
    class DerivedX:public Derived
    {
        public:
             int a,b;
             DerivedX()
             {
                cout<<"Inside DerivedX Constructor\n";
                a=50;
                b=60;
             }
             ~DerivedX()
             {
                cout<<"Inside DerivedX Destructor\n";

             }
             void sun()
             {
                cout<<"Inside DerivedX Sun\n";
             }

    };

    int main()
    {
    
        DerivedX dobj;

        //Constructors: Base->Derived->DerivedX

        cout<<Inside Main Function <<"\n";

        cout<<Size of Base Class"<<sizeof(Base)<<"\n"; //8
        cout<<Size of Base Class"<<sizeof(Derived)<<"\n"; //16
        cout<<Size of Base Class"<<sizeof(DerivedX)<<"\n"; //24

        cout<<dobj.i<<"\n"; //10
        cout<<dobj.j<<"\n"; //20
        cout<<dobj.x<<"\n"; //30
        cout<<dobj.y<<"\n"; //40
        cout<<dobj.a<<"\n"; //50
        cout<<dobj.b<<"\n"; //60

        dobj.Fun();  //Inside fun of base
        dobj.Gun();  //Inside Gun of Base
        dobj.Sun();  //Inside sun of base

         

        return 0;
    }
    
