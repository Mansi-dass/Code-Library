#include <stdio.h>

int main(){
    int n;
    printf("Enter a num to print natural number\n");
    scanf("%d",&n);
    int i=1;
    do{
        printf("natual no. %d\n",i);
        i++;
    }while(i<=n);
    return 0;
}