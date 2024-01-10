// Write a program to create an array of 10 integers and store a multiplication table of 5 in it.
// Repeat above problem for a general input provided by the user using scanf()
#include <stdio.h>

int main(){
    int arr[10];
    int n;
    printf("Enter the value for which you want muliplicaton table\n");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        arr[i]= n * (i+1);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d x %d = %d\n",n,(i+1), arr[i]);
    }
    return 0;
}