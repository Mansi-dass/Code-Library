#include <stdio.h>

int main(){
    char s[34];
    printf("Enter your name: ");
    // scanf("%s",s);
    gets(s);
    printf("your name is %s",s);
    return 0;
}