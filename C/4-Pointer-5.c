// Write a program to print the value of a variable i by using the "pointer to pointer" type of variable.
#include <stdio.h>

int main(){
    int i=5; 
    int *ptr1=&i;
    int **ptr2=&ptr1;
    printf("the value of i %d\n",i);
    printf("the value of i through ptr1 %d\n",*ptr1);
    printf("the value of i through ptr2 %d\n",**ptr2);
    return 0;
}