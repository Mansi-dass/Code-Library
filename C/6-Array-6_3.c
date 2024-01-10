// Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively.
// Repeat problem 7 for a custom input given by the user.
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
    int table;
    printf("Enter how many tables you want to print\n");
    scanf("%d",&table);
    int arr[table][10];
    for (int i = 0; i < table; i++)
    {
        int k;
    printf("Enter the number of table\n");
    scanf("%d",&k);
     printTable(arr[i],k,10);
    }
    return 0;
}