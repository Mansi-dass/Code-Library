// Write a recursive function to calculate the factorial of the number.
#include <stdio.h>
int factorial(int n);
int main(){
    int n;
    printf("Enter the value to find factorial\n");
    scanf("%d", &n);
    printf("factorial of %d is %d",n,factorial(n));
    return 0;
}
int factorial(int n)
{
    int f;
    if(n==0||n==1)
    return 1;
    else
    f=n *factorial(n-1);
    return f;
}