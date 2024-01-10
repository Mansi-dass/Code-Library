// Write a program to read a text file character by character and write its content twice in a separate file.
#include <stdio.h>

int main()
{
    FILE *ptr;
    FILE *ptrw;
    ptr = fopen("demo.txt", "r");
    ptrw = fopen("newdemo.txt", "w");
    char ch = fgetc(ptr);
    while (ch != EOF)
    {
        fputc(ch,ptrw);
        fputc(ch,ptrw);
        ch=fgetc(ptr);
    }
    fclose(ptr);
    fclose(ptrw);
    return 0;
}