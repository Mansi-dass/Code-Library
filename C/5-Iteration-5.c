// Write a program to calculate the sum of the numbers occurring in 
// the multiplication table of 8.(Consider 8x1 to 8x10)
#include <stdio.h>

int main(){
    int num=8;
    int result,sum=0;
    for(int i =1;i<=10;i++)
    {
        result= num*i;
        sum +=result;
        printf("%d x %d = %d\n",num , i, result);
    }
    printf("the sum of all is %d\n",sum);
    return 0;
}