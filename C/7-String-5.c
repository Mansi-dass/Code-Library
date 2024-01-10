// Write a program to encrypt a string by adding 1 to the ASCII value of its characters
#include <stdio.h>
void encrypt(char *ptr)
{
    while(*ptr!='\0')
    {
        *ptr= *ptr + 1;
        ptr++;
    }
    
}
int main(){
    char s[]="String";
    encrypt(s);
    printf("The encrypted string is %s",s);
    return 0;
}