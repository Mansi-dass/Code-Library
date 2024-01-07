// Write a program to find the greatest of four numbers entered by the user.

#include <stdio.h>

int main(){
    int num1,num2,num3,num4;

    printf("Enter the first number \n");
    scanf("%d",&num1);
    printf("Enter the second number \n");
    scanf("%d",&num2);
    printf("Enter the third number \n");
    scanf("%d",&num3);
    printf("Enter the fourth number \n");
    scanf("%d",&num4);

    if (num1>=num2 && num1>=num3 && num1>=num4)
    {
        printf("%d is the greatest number",num1);
    }
    else if (num2>=num1 && num2>=num3 && num2>=num4)
    {
        printf("%d is the greatest number",num2);
    }
    else if (num3>=num1 && num3>=num2 && num3>=num4)
    {
        printf("%d is the greatest number",num3);
    }
    else if (num4>=num1 && num4>=num3 && num4>=num3)
    {
        printf("%d is the greatest number",num4);
    }
    else 
    {
        printf("There's no greater number ");
    }
    return 0;
}