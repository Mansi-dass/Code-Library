// Create an array of the multiplication table of 7 up to 10 (7x10=70).
//  Use realloc to make it store 15 numbers(from 7x1 to 7x15).
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i <10; i++)
    { 
        ptr[i]=(i+1)*7;
        printf("%d X %d= %d\n",7, i+1, ptr[i]);
    }

    ptr = realloc(ptr, 15 * sizeof(int));
    printf("After reallocation.....\n");
    for (int i = 0; i <15; i++)
    { 
        ptr[i]=(i+1)*7;
        printf("%d X %d= %d\n",7, i+1, ptr[i]);
    }

    return 0;
}