// Write a program to change the value of a variable to ten times its current value.
//  Write a function and pass the value by reference.
#include <stdio.h>
void change(int *a){
    *a= *a *10;
    // printf("%d\n",b);
    // return *a;
}
int main(){
    int a=6;
    printf("the value of a before function call %d\n",a);
change(&a);
    printf("the value of a after function call %d\n",a);

    return 0;
}