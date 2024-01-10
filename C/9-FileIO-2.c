// Write a program to generate a multiplication table of a given number in text format.
// Make sure that the file is readable and well-formatted.
#include <stdio.h>

int main(){
    int n;
    FILE *ptr;
    ptr=fopen("multable.txt","w");
    printf("Enter the integer you want to see table for:\n");
    scanf("%d",&n);
    fprintf(ptr, "The multiplication table for %d :\n",n);
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d X %d = %d\n",n,i,n*i);
    }
    fclose(ptr);
    return 0;
}