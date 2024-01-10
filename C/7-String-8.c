// Write a program to check whether a given character is present in a string or not.
#include <stdio.h>
void checkChar(char *ptr, char c)
{
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    if (count>=1){
        printf("The character is present in the string");
    }
    else{
        printf("The character is not present in the string");
    }
}
int main()
{
    char s[] = "String is a character array in c language";
    char c = 't';
    checkChar(s, c);
    // printf("The occurance of %c in the string is %d",c,);
    return 0;
}