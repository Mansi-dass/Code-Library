// Create a 2-d array by taking input from the user. 
// Write a display function to print the content of this 2-d array on the screen
#include <stdio.h>
void display(int *ptr){
    for(int i=0; i<3; i++){
        for(int j=0; j<2 ;j++){
            printf("%d ",*ptr);
            ptr++;
        }
        printf("\n");
    }
}

int main(){
    int arr[3][2];
    int *ptr=arr;
    for(int i=0; i<3; i++){
        for(int j=0; j<2 ;j++){
            printf("Enter the value for  %d column and %d row\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    display(&arr[0][0]);
    return 0;
}