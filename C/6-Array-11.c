#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of matrix");
    scanf("%d",&n);
    int a1[n][n];
    int a2[n][n];
    // First Matrix Initialization
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<n;i++)    
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    // Second Matrix Initialization
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<n;i++)    
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    //printing the first matrix (a1)
    printf("Matrix - 1 : \n");
    for(int i=0;i<n;i++)    
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }
    //printing the first matrix (a2)
    printf("Matrix - 2 : \n");
    for(int i=0;i<n;i++)    
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
    //Multiplication
    int mul[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int ans=0;
            for(int k=0;k<n;k++){
                ans += a1[i][j] * a2[k][j];
            }
            mul[i][j]=ans;
        }
    }
    
    //printing the mul matrix
    printf("The elements of the Multiplication matrix: \n");
    for(int i=0;i<n;i++)    
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}