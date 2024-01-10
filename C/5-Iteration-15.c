// Number Square pattern
#include <stdio.h>

int main()
{

    int n = 5, n1;
    int k = (2 * n) - 1;
    for (int i = n; i >=1; i--)
    {
        for (int j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        for (int j = i; j >1; j--)
        {
            printf("%d ", i);
        }
        int count=0;
        for (int j = 1; j <i; j++)
        {
            count++;
            printf("%d ", i);
        }
        for(int j=1;j<n-count;j++){
            printf("%d ",i+j);
        }
        printf("\n");
    }
    for (int i = 2; i <=n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        for (int j = i; j >1; j--)
        {
            printf("%d ", i);
        }
        int count=0;
        for (int j = 1; j <i; j++)
        {
            count++;
            printf("%d ", i);
        }
        for(int j=1;j<n-count;j++){
            printf("%d ",i+j);
        }
        
        printf("\n");
    }

    // n1 = n;
    // for (int i = 1; i <= k; i++)
    // {
    //     for (int j = 1; j <= k; j++)
    //     {
    //         if (j == 1 || j == k || i == 1 || i == k)
    //         {
    //             printf("%d ", n);
    //         }
    //         else
    //         {
    //             if (i==j && i == n)
    //             {
    //                 printf("%d ", (n * 2) - k);
    //             }
    //             else
    //             {
    //                 printf("%d ", k - n1);
    //                 n1 = -1;
    //             }
    //         }
    //     }
    //     printf("\n");
    // }
    return 0;
}