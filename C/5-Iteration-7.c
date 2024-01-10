// Write a program to calculate the factorial of a given number using for loop. Repeat this using a while loop

#include <stdio.h>

int main(){
    int num=1;
    while(num>=1){
        int x;
        printf("Enter the no. to find factorial \n");
        scanf("%d", &x);
        int factorial = 1;
        for (int i = 1; i <= x; i++)
        {
            factorial *= i;
        }
        printf("Factorial is %d\n", factorial);

        printf("do you want to continue y=1/n=0\n");
        scanf("%d",&num);
    }
    return 0;
}