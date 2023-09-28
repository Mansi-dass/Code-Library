//  Write a program to calculate simple interest for
//  a set of values representing principle, no of years, and rate of interest.

#include <stdio.h>

int main()
{
    int p,n,r; 
    printf("Enter value of principle \n ");
    scanf("%d" ,&p);
    printf("Enter value of years \n ");
    scanf("%d" ,&n);
    printf("Enter value of rate \n ");
    scanf("%d" ,&r);

    // Calculate simple interest 
    int SI= (p*n*r)/100;
    printf("Simple interest will be %d \n ", SI);
    return 0;

}