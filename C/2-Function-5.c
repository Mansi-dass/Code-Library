#include <stdio.h>
// function with no arguments and no return value
void Print()
{
    printf("\n****Sum Calculator****\n\n");
}
// function with arguments and no return value
void display(int s)
{
    printf("The sum of a and b is %d", s);
}
// function with arguments and with return value
int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, sum;
    // calling our function with no arguments and no return value
    Print();
    // Taking user input for a and b
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    
    // calling our function with arguments and with return value
    sum = Sum(a, b);
    //  calling our function with arguments and no return value
    display(sum);
    return 0;
}