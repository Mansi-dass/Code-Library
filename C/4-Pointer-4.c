// Write a program using a function that calculates the sum and average of two numbers.
//  Use pointers and print the values of sum and average in main().
#include <stdio.h>
void sum_avg(int a, int b,int *sum, float *avg);
int main(){   
    int a=6,b=3;
    int sum;
    float avg;
    sum_avg(a,b,&sum,&avg);
    printf("the value of sum %d\n ",sum);
    printf("the value of avg %.2f \n",avg);
    
    return 0;
}

void sum_avg(int a ,int b,int *sum, float *avg){
 *sum=a+b;
 *avg = (float)*sum/2;
}