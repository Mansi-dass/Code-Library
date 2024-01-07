// Write a program using functions to find the average of three numbers
#include <stdio.h>
void Average(int a,int b, int c);
int main(){
    int a,b,c;
    printf("Enter the value of 1st number: ");
    scanf("%d",&a);
    printf("Enter the value of 2nd number: ");
    scanf("%d",&b);
    printf("Enter the value of 3rd number: ");
    scanf("%d",&c);
    Average(a,b,c);
    
    return 0;
}
void Average(int a,int b, int c)
{
 float average = (a+b+c)/3.0;
 printf("The average of 3 numbers :%f",average);
}