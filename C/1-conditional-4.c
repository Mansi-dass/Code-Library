// Write a program to determine whether a character entered by the user is lowercase or not.
// 97-122 = a-z ASCII Values
#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character to check\n");
    scanf("%c",&ch);
    
    if(ch>=97 && ch<=122)
    {
        printf("%c is lower case", ch);
    }
    else
    {
        printf("%c is not lower case", ch);
    }

    return 0;
}