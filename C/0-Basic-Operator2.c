// relational operators:
// equal(==), not equal(!=), greater than equal to(>=), less than equal to (<=), greater than (>), less than (<)
#include <stdio.h>

int main(){
    int a= 10;
    int b= 20;
    
    // comparing two value for being equal, greater, or smaller.    
    if(a==b){
        printf("Equal");
    }else{
        if(a>b){
            printf("A is greater than B!");
        }else{
            printf("B is greater than A!");
        } 
    }
    return 0;
}