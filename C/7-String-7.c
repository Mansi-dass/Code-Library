// Write a program to count the occurrence of a given character in a string.
#include <stdio.h>
int countChar(char *ptr, char c)
{
    int count=0;
    while(*ptr!='\0'){
        if(*ptr==c)
        {
            count++;
        }
        ptr++;

    }
    return count;
}
int main(){
    char s[]="String is a character array in c language";
    char c='c';
    printf("The occurance of %c in the string is %d",c,countChar(s,c));
    return 0;
}