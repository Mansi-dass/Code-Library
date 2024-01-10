// Write a program containing a function that reverses the array passed to it.
#include <stdio.h>
void reverse(int *arr,int n)
{
    //One way-
    int temp;
    for(int i=0;i<(n/2);i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    //another way-
    // int rvs[10];
    // for(int i=9;i>=0;i--)
    // {
    //     rvs[i]=*ptr;
    //     ptr++;
    // }
    // for(int i=0;i<10;i++)
    // {
    //     printf("%d ",rvs[i]);
    // }
}
int main(){
    int arr[10]={2,54,11,25,16,47,33,56,88,9};
     printf("Before reversing the array:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    printf("After reversing the array:\n");
    reverse(arr,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}