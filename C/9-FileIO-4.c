// Take name and salary of two employees as input from the user 
// and write them to a text file in the following format:
//name1, 3300
//name2, 7700
#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("demo.txt","w");
    char name1[30],name2[30];
    int salary1,salary2;
    printf("Enter the name of first employee:\n");
    scanf("%s",&name1);
    printf("Enter the salary of first employee:\n");
    scanf("%d",&salary1);
    printf("Enter the name of second employee:\n");
    scanf("%s",&name2);
    printf("Enter the salary of second employee:\n");
    scanf("%d",&salary2);
    fprintf(ptr,"%s, %d\n",name1 , salary1);
    fprintf(ptr,"%s, %d\n",name2 , salary2);
    fclose(ptr);
    return 0;
}