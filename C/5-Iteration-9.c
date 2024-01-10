// Write a program to check whether a given number is prime or not using loops.
// Implement this using other types of loops.

#include <stdio.h>

int main(){
    int num,count=0;
    printf("enter a no. to find prime or not\n");
    scanf("%d",&num);
    int i = 1;
    while(i<=num)
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
    }
    if (count==2){
        printf("Prime no.");
    }
    else{
        printf("Not a prime no.");
    }
    return 0;
}