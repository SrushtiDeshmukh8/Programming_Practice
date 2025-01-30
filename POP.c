#include<stdio.h>


int addition(int Value1,int Value2)
{
    int Ans=0;
    Ans = Value1 + Value2;
    return Ans;

}

int subtraction(int Value1,int Value2)
{
    int Ans=0;
    Ans = Value1 - Value2;
    return Ans;

}






int main()

{
    int iNo1=0,iNo2=0,iAns=0;

    printf("Enter First No:\n");
    scanf("%d",&iNo1);

    printf("Enter Second No:\n");
    scanf("%d",&iNo2);

    iAns=addition(iNo1,iNo2);
    printf("addition is:%d\n",iAns);

    iAns=subtraction(iNo1,iNo2);
    printf("subtraction is:%d\n",iAns);


    return 0;
}