// Write a program to print the multiplication table of a given number n.

#include <stdio.h>

int main(){
    int num;
    printf("Enter the no. for multiplication table \n");
    scanf("%d\n", &num);
    for(int i =1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num , i, num*i );
    }
    return 0;
}