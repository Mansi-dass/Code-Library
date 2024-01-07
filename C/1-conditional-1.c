// Write a program to find out whether a student is pass or fail;
// if it requires a total of 40% and at least 33% in each subject to pass.
// Assume 3 subjects and take marks as input from the user.

#include <stdio.h>

int main()
{
    int maths, science, english;
    float total;

    printf("Enter marks of Maths: \n");
    scanf("%d", &maths);
    printf("Enter marks of Science: \n");
    scanf("%d", &science);

    printf("Enter marks of English: \n");
    scanf("%d", &english);

    total = (maths + science + english) / 3;
    if (total >= 40 && maths >= 33 && science >= 33 && english >= 33)
    {
        printf("Your percentage is %f and Your Pass!!", total);
    }
    else
    {
        printf("Your percentage is %f and Your Fail !!", total);
    }
    return 0;
}