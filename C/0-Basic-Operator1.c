// Arithmetic operators:
// Addition (+), Subtraction (-), Multiplication (*), Division (/), Modulus (%), Increment (++), Decrement(--)
#include <stdio.h>

int main(){
    int a= 15;
    int b= 3;
    
    printf("A:%d  B:%d \n",a,b);
    printf("Addition: %d \n",a+b);
    printf("Subtraction: %d \n",a-b);
    printf("Multiplication: %d \n",a*b);
    printf("Division: %d \n",a/b);
    printf("Modulus: %d \n",a%b);
    printf("Increment: %d \n",++a);
    printf("Decrement: %d \n",--b);
    
    return 0;
}