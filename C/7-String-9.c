// Write your own version of strcat function from <string.h>

#include <stdio.h>
#include <string.h>

int main(){
    char s1[15]="Ravi";
    char s2[]="Chandra";
    int i=strlen(s1),j;
        for(j=0; s2[j] !='\0';j++ ){
            s1[i+j]=s2[j];
        }
        s1[i+j]='\0';
    printf("the concatenated string is %s\n",s1);
    return 0;
}