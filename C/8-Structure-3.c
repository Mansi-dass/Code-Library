// Write a program to illustrate the use of an arrow operator -> in C.
#include <stdio.h>
struct vector{
    int x;
    int y;
};
int main(){
    struct vector v1, *ptr;
    v1.x=34;
    v1.y=54;
    ptr=&v1;
    printf("%d\n",(*ptr).x);
    printf("%d\n",ptr->x);
    return 0;
}