#include<stdio.h>

int Addition(int Value1,int Value2)                        //Function definition

{
    int Result=0;                                          //Local Variable
    Result = Value1 + Value2;
    return Result;
}

int main()                             // Entry Point Function

{
    int No1=0,No2=0,Ans=0;       //local variable

    printf("Enter first number:\n");
    scanf("%d",&No1);

    printf("Enter Second Number:\n");
    scanf("%d",&No2);

    Ans=Addition(No1,No2);                             //Function call
    printf("Addition is:%d\n",Ans);

    return 0;
  
}