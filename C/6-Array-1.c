// Create an array of 10 numbers.
// Verify using pointer arithmetic that (ptr+2) points to the third element 
// where ptr is a pointer pointing to the first element of the array.
#include <stdio.h>

int main(){
    int arr[10]={2,54,11,25,16,47,33,56,88,9};
    int *ptr=&arr[0];//int *ptr=arr;
    ptr=ptr+2;
    // printf("Third element in the array is %d\n",arr[2]);
    // printf("pointer pointing third element through ptr+2 is %d\n",*ptr);
    if(ptr==&arr[2])
    {
        printf("Pointer is pointing to the same element");
    }
    else{
        printf("Pointer is not pointing to the same element");
    }
    return 0;
}