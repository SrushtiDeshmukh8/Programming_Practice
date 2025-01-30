#include<stdio.h>

int main()

{
    int i =11;
    float f=78.90;
    char c='D';
    double d=34.5678;

    printf("%d\n",sizeof(c));     // 1
    printf("%d\n",sizeof(i));     // 4
    printf("%d\n",sizeof(f));     // 4
    printf("%d\n",sizeof(d));     // 8

    return 0;
}