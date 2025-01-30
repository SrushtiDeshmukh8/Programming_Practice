#include <iostream>

using namespace std;

class Demo
{
    public:
       int addition(int A, int B)
       {
        return A+B;
       }
       double addition(double A, double B)
       {

        return A+B;
       }
       int addition(int A, int B,int C)
       {

        return A+B+C;
       }

};

int main()

{
    Demo obj;
    cout<<obj.addition(10,11)<<"\n";
    cout<<obj.addition(10.90,11.99)<<"\n";
    cout<<obj.addition(10,11,20)<<"\n";  

    return 0;
}