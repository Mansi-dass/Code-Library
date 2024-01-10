#include <stdio.h>

// structure of employee
typedef struct employee
{
    int id;
    char name[32];
    int salary;
}employee;

// To print the details of employee whose salary is above 5000
void print(employee *em,int n){
    int count=1;
    printf("Details of employees whose salary is above 5000\n");
    for(int i=0;i<n;i++){
        if(em[i].salary>5000){
            printf("%d. employee name: %s\n",count,em[i].name);
            printf("    employee ID: %d\n",em[i].id);
            printf("    employee salary: %d\n",em[i].salary);
            count++;
        }
    }
}
int main(){
    int n;
    printf("Enter the number of employee: ");
    scanf("%d",&n);
    employee e[n];
    // taking user input for employee record
    for (int  i = 0; i < n; i++)
    {
        printf("Enter employee %d ID: ",i+1);
        scanf("%d",&e[i].id);
        printf("Enter employee %d name: ",i+1);
        scanf("%s",&e[i].name);
        printf("Enter employee %d salary: ",i+1);
        scanf("%d",&e[i].salary);
    }
    // function call to print details
    print(e,n);
    return 0;
}