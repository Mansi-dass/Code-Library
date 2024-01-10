// Write a program with a structure representing a Complex number.
#include <stdio.h>
typedef struct complex {
    float real;
    float img;
}comp;
int main(){
    comp c1;
    c1.real=8.9;
    c1.img=4.5;
    printf("%.2f is real and %.2f is img",c1.real,c1.img);
    return 0;
}