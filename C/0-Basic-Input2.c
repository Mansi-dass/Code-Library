//  Write a c program to calculate the area of a rectangle:
// a) using hardcoded inputs & 
// b) using inputs supplied by the user

#include <stdio.h>

int main(){
    // with hardcoded input
    int a = 2;
    int b = 3; 
    printf("The area of rectangle is %d \n", a*b);

    // With user provided inputs
    int length, width;
    printf("Enter the value of length of rectangle \n");
    scanf("%d",&length);
    printf("Enter the value of width of rectangle \n");
    scanf("%d",&width);
    printf("The area of rectangle is %d \n", length*width);

    return 0;
}