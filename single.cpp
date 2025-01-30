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
    class Derived:Public Base
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

    int main()
    {
    
        Derived dobj;

        cout<<Inside Main Function <<"\n";
        cout<<dobj.i<<"\n";
        cout<<dobj.j<<"\n";
        cout<<dobj.x<<"\n";
        cout<<dobj.y<<"\n";

        dobj.Fun();
        dobj.Gun();

         

        return 0;
    }
