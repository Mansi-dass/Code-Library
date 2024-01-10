// Write a program to modify a file containing an integer to double its value.
//        If old value = 2, then new file value = 4
#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;
    ptr = fopen("demo.txt", "r");
    fscanf(ptr,"%d", &num);
    ptr = fopen("demo.txt", "w");
    fprintf(ptr, "%d", num * 2);
    fclose(ptr);
    return 0;
}