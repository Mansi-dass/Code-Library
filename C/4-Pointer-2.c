// Write a program having a variable i. Print the address of i.
//  Pass this variable to a function and print its address. Are these addresses same? Why?
#include <stdio.h>
void print(int a);
int main(){
    int i=7;
    printf("the address of i is %u\n ",&i);
    print(i);
    return 0;
}

void print(int a){
    printf("the address of variable at function %u",&a);
}