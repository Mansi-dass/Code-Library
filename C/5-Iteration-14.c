#include <stdio.h>

int main(){
    for(int i=0;i<5;i++){
        char ch='A';
        for(int j=0;j<=i;j++){
            printf("%c",(ch+j));
        }
            printf("\n");
    }
    return 0;
}