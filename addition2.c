#include<stdio.h>

int main()
{
    int Ans = 0;
    int No1 = 0;
    int No2 = 0;

    printf("Please Enter First Number:\n");
    scanf("%d",&No1);

    printf("Please Enter Second Number:\n");
    scanf("%d",&No2);

    Ans = No1 + No2;

    printf("Addition is:%d\n", Ans);
    
    return 0;
}