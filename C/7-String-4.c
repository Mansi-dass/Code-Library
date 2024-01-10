// Write your own version of strcpy function from <string.h>
#include <stdio.h>
void stcpy(char *st1, char *st2)
{
    char st[34];
    int i=0;
    while(*st1!='\0')
    {
        st[i]=*st1;
        st1++;
        i++;
    }
    st[i]=*st2;
    st2++;
    i++;
    while(*st2!='\0')
    {
        st[i]=*st2;
        st2++;
        i++;
    }
    st[i]='\0';
    printf("%s",st);
}
int main()
{
    char st1[] = "String is ";
    char st2[] = "easy";
    stcpy(st1, st2);

    return 0;
}