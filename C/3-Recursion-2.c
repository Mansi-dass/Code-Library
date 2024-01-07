// Write a program using recursion to calculate the nth element of the Fibonacci series.
/*
0,1,1,2,3,5,8,13,21,34
code with harry 
hint :
fib(n)=fib(n-1)+fib(n-2)
fib(1)=0
fib(2)=1
*/
#include <stdio.h>
int fibonacci(int n);
int main()
{
    int n, fib;
    printf("Enter the element value to be calculated\n");
    scanf("%d", &n);
        printf("element be: %d",fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    if(n<=1)
    return n;

    else if(n==2)
    return 1;

    else
    {
    int fib = fibonacci(n - 1) + fibonacci(n - 2);
    return fib;
    }
}