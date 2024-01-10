// Create a three-dimensional array and print the address of its elements in increasing order.
#include <stdio.h>

int main()
{
    int arr[5][3][2];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("the adress of element arr[%d][%d][%d] is %u \n", i,j,k,&arr[i][j][k]);
            }
        }
    }
    return 0;
}