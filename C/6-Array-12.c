#include <stdio.h>


int main(){
    int row,col;                 //Matrix Size Declaration
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&row,&col);   //Matrix Size Initialization
    int arr[row][col];        //Matrix Size Declaration
    printf("\nEnter the elements of the matrix: \n");
    for(int i=0;i<row;i++)    //Matrix Initialization
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(int i=0;i<row;i++)     //Print the matrix
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int ans[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j || j>i){
                ans[i][j]=arr[i][j]+arr[i][j];
            }
            else{
                ans[i][j]=0;
            }
        }
    }

    printf("\nThe elements in the sum matrix are: \n");
    for(int i=0;i<row;i++)     //Print the matrix
    {
        for(int j=0;j<col;j++)
        {
                printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}