// Following operations can be performed on pointers:

// Addition of a number to a pointer.
// Subtraction of a number from a pointer
// Subtraction of one pointer from another
// Comparison of two pointer variables

// Quick Quiz: Try these operations on another variable by creating pointers in a program. 
// Demonstrate all four operations.

#include <stdio.h>

int main(){
    int i=6,j=8;
    int *ptr=&i;
    int *ptr2=&j;
    printf("the value of ptr is %u\n",ptr);
    ptr=ptr+1;
    printf("the value of ptr after addition is %u\n",ptr);
    ptr=ptr-2;
    printf("the value of ptr after subraction is %u\n",ptr);
    ptr2=ptr2-ptr;
    printf("the value of ptr after subtraction  from pointer  is %u\n",ptr);

    // printf("the value of ptr is %u",);
    
    return 0;
}