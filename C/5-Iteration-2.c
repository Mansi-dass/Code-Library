// Write a program to print a multiplication table of 10 in reversed order.
#include <stdio.h>

int main(){
    int num =10;
    for(int i =10;i;i--)
    {
        printf("%d x %d = %d\n", num, i , num*i );
    }
    return 0;
}