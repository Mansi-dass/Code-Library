// Write a program to take a string as an input from the user using %c and %s. Confirm that the strings are equal.
#include <stdio.h>
#include <string.h>

int main(){
    char str1[34];
    char str2[34];
    char c;
    int i=0;
    printf("Enter the string: ");
    scanf("%s",str1);
    printf("Enter the second string character by character: ");
    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i-1]='\0';
    
    printf("The value of str1 : %s\n", str1);
    printf("The value of str2 : %s\n", str2);
    printf("strcmp for these string return %d", strcmp(str1,str2));
    return 0;
}