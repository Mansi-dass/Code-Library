// Write a program to decrypt the string encrypted using the encrypt function in problem 5.
#include <stdio.h>
void decrypt(char *ptr)
{
    while(*ptr!='\0')
    {
        *ptr= *ptr - 1;
        ptr++;
    }
    
}
int main(){
    char s[]="Tusjoh";
    decrypt(s);
    printf("The encrypted string is %s",s);
    return 0;
}