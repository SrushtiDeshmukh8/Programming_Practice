#include<stdio.h>

int main()

{  
    int no=10;

    int *ptr=&no;

    printf("%d\n",no);
    printf("%d\n",&no);
    printf("%d\n",sizeof(no));
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",sizeof(ptr));



    return 0;
}