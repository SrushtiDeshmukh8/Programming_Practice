#include<stdio.h>

int main()

{
    int A=10,B=10;                //Local Variable
    int No1=0,No2=0;

    No1=A++;
    printf("Value of No1 is:%d\n",No1);            //Post Increment(First Initialise then increment)
    printf("Value of A is:%d\n",A);

    No2=++B;
    printf("Value of No2 is:%d\n",No2);                 //Pre Increment(First increment then initialise)
    printf("Value of B is:%d\n",B);

    return 0;
}