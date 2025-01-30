#include<stdio.h>
 void fun();
 void gun();

 int main()
 {
    printf("Inside Main\n");
    fun();
    printf("End of Main\n");
    return 0;
 }
 void gun()
 {
    printf("Inside Gun\n");
 }
 void fun()
 {
    printf("Inside fun\n");
    gun();
    printf("End of Fun\n");
 }