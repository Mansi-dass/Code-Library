// Write a program to check whether a given number is prime or not using loops.

//One way:
// #include <stdio.h>

// int main(){
//     int num,count=0;
//     printf("enter a no. to find prime or not\n");
//     scanf("%d",&num);
//     for(int i = 1;i<=num;i++)
//     {
//         if(num%i==0)
//         {
//             count++;
//         }
//     }
//     if (count==2){
//         printf("Prime no.");
//     }
//     else{
//         printf("Not a prime no.");
//     }
//     return 0;
// }


//Another way:
#include <stdio.h>

int main(){
    int num,prime=1;
    printf("enter a no. to find prime or not\n");
    scanf("%d",&num);
     for(int i = 2;i<num;i++)
    {
        if(num%i==0)
        {
            prime=0;
            break;
        }
    }
    if (prime==0){
        printf("Not a Prime no.");
    }
    else{
        printf("Prime no.");
    }
    return 0;
}