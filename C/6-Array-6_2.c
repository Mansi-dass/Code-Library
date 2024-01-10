// Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively.
#include <stdio.h>
void printTable(int *mulTab,int num,int n)
{
     for (int i = 0; i < n; i++)
    {
        mulTab[i]=num*(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d x %d =%d\n",num,i+1,mulTab[i]);
    }
}
int main()
{
    int arr[3][10];
    printTable(arr[0],2,10);
    printTable(arr[1],7,10);
    printTable(arr[2],9,10);
    
    return 0;
}