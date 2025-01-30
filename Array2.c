#include<stdio.h>

int main()

{
    int Price[]={67,85,89,90,34,88};

    printf("%d\n",Price[1]);
    printf("%d\n",Price[5]);
    printf("%d\n",Price[4]);

    printf("%d\n",sizeof(Price));
    printf("%d\n",sizeof(Price[1]));
    printf("%d\n",sizeof(Price[4]));


    return 0;
}