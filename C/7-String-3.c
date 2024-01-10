// Write a function slice() to slice a string. 
// It should change the original string such that it is now the sliced strings. 
// Take m and n as the start and ending position for slice.
#include <stdio.h>
void slice(char *st, int m, int n){
    int i=0;
    while((m+i)<=n)
    {
        st[i]=st[m+i];
        i++;
    }
    st[i]='\0';
}
int main(){
    char st[]="String";
    slice(st,1,4);
    printf("%s",st);
    return 0;
}