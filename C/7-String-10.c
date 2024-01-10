// Count Numbers from string 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[10] = "p11k26i373";
    //  scanf("%s",s);
    int num = 48;
    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < 10; j++)
        {
            int ch = s[j];
            if (ch == num)
            {
                count++;
            }
        }
        num++;
        printf("%d ", count);
    }
    return 0;
}
