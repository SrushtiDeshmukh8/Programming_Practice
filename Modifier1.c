#include<stdio.h>

int main()

{
    int a =10;                      //4 Byte
    short int b = 10;               //2 Byte
    long int c = 10;                //8 Byte

    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));



    return 0;
}