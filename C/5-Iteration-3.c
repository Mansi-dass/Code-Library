// Write a program to sum the first ten natural numbers using a while loop.
#include <stdio.h>

int main(){
    int i=1, sum=0;
    while(i<=10)
    {
        sum+= i;
        i++;
    }
    printf("the sum of no. is %d\n",sum);
    return 0;
}