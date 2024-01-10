// Write a program to read three integers from a file
#include <stdio.h>

int main(){
    int a,b,c;
    FILE *ptr;
    ptr=fopen("demo.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("%d %d %d",a,b,c);
    fclose(ptr);
    return 0;
}