// Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively.
#include <stdio.h>

int main()
{
    int arr[3][10];
    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = (i+1)*2;
        arr[1][i] = (i+1)*7;
        arr[2][i] = (i+1)*9;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}