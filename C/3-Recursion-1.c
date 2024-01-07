// Write a recursive function to calculate the sum of first n natural numbers.
#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter the nth natural number \n");
    scanf("%d", &n);
    
    printf("The sum of first %d natural number :%d \n",n,sum(n));
    return 0;
}
int sum(int n)
{
    if(n>=1)
    {
    int result= n + sum(n-1);
    return result;
    }
}