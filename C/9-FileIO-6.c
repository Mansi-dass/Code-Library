#include <stdio.h>

int main(){
    char *str="hello world ";
    FILE *ptr;
    ptr=fopen("demofile.txt","a");
    fputs(str,ptr);   
    // fprintf(ptr,"Hello,\n");
    // fprintf(ptr,"My name is mansi dass\n");
    // fprintf(ptr,"Created this file for the demo\n");
    fclose(ptr);
    return 0;
}