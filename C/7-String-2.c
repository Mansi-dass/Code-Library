// Write your own version of strlen function from <string.h>
#include <stdio.h>

int strlen(char *arr)
{
    int count=0;
    while(*arr!='\0')
    {
        count++;
        arr++;
    }
    return count ;
}
int main(){
    char str[34];
    printf("Enter the string: ");
    // scanf("%s",str);
    gets(str);
    printf("the length of string is %d ",strlen(str));
    return 0;
}