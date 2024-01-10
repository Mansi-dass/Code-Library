// Write a program to sum the first ten natural numbers using for and do-while loop.
#include <stdio.h>

int main(){
    int sum1 =0;
    for(int i=1;i<=10;i++)
    {
        sum1 += i;
    }
    printf("the sum of no. from for loop is %d\n",sum1);
    int sum2=0, i=1;
    do{
        sum2 +=i;
        i++;
    }while(i<=10);
    printf("the sum of no. do-while loop is %d\n",sum2);
    return 0;
}