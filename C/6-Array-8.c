#include <stdio.h>

int main()
{
    float arr[4];
    arr[0] = 17.2;
    arr[1] = 1.25;
    arr[2] = 1.23;
    arr[3] = 1.22;
    
    for (int i = 0; i < 4; i++)
    {
        printf("%f\n",arr[i]);
    }
    
    float ar[]={1.2,6.3,9.6};
    printf("%f\n", ar[0]);
    printf("%f\n", ar[1]);
    printf("%f\n", ar[2]);
    return 0;
}