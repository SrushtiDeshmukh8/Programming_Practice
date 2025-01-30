#include <iostream>

using namespace std;

class Demo
{
    public:
         int No1, No2;
         Demo(int A,int B)
         {
            No1=A;
            No2=B;
         }
         void fun()
         {
            No1++;
            No2++;

         }
         void gun()const
         {
            //No1++; NA
            //No2++;  NA
         }

};

int main()
{
    Demo obj1(10,20);
    const Demo obj2(11,21);
    
    obj1.fun();
    obj1.gun();

    obj2.fun();
    obj2.gun();

    return 0;
}