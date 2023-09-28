#include <stdio.h>
int main(){
    int a, b;
    printf("Enter 2 integer numbers to swap\n");
    scanf("%d%d",&a, &b);
    printf("Before Swap:\n");
    printf("1st no = %d \n2nd no = %d \n",a,b);

    // swapping without temp var 
    a=a-b;
    b=a+b;
    a=b-a;

    printf("After Swap:\n");
    printf("1st no = %d \n2nd no = %d",a,b);
    return 0;
}
