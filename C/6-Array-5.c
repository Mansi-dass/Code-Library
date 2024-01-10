// Write a program containing functions that counts the number of positive integers in an array.
#include <stdio.h>
int countPos(int *ptr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*ptr % 2 == 0)
        {
            count++;
        }
        ptr=ptr+1;
    }
    return count;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter value for %d element",(i+1));
    //     scanf("%d",&arr[i]);
    // }
    
    printf("The total number of positive intrger in the array is %d",countPos(arr, 10));
    return 0;
}