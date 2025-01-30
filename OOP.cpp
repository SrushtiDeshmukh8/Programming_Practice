#include<iostream>

using namespace std;

class Arithmetic
{
    public:
        int Value1;
        int Value2;

        Arithmetic(int A,int B)    
        {
            Value1=A;
            Value2=B;
        }  

        int Addition() 
        {
            int Ans = 0;
            Ans =Value1 + Value2;
            return Ans;
        } 

        int Subtraction() 
        {
            int Ans = 0;
            Ans =Value1 - Value2;
            return Ans;
        }   



};

int main()

{
    int iNo1=0,iNo2=0,iAns=0;

    cout<<"Enter First No:\n";
    cin>>iNo1;

    cout<<"Enter Second No:\n";
    cin>>iNo2;

    Arithmetic obj(iNo1, iNo2);

    iAns=obj.Addition();
    cout<<"Addition is:"<<iAns<<"\n";

    iAns=obj.Subtraction();
    cout<<"Subtraction is:"<<iAns<<"\n";

    return 0;
 

}