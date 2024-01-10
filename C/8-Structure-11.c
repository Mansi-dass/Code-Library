#include <stdio.h>
typedef struct employee
{
    double empno;
    char empname[30];
    char department[30];
    int salary;
} emp;
// function for printing employee details
void display(emp *ptr_emp)
{
    int c = 1;
    while (c<=20)
    {
        printf("***Details for %d emoloyee***\n ", c);
        printf("The name of the employee : %s\n ", (*ptr_emp).empname);
        printf("The name of the department :  %s\n ", (*ptr_emp).department);
        printf("The number of the employee : %.0lf\n ", (*ptr_emp).empno);
        printf("The salary of the employee : %d\n", (*ptr_emp).salary);
        ptr_emp++;
        c++;
    }
}
int main()
{
    emp e[20];
    for (int i = 0; i < 20; i++)
    {
        fflush(stdin);
        // Taking user input  for employee details
        printf("***Enter details for %d emoloyee***\n ", (i + 1));
        printf("Enter the name of the employee :\n ");
        gets(e[i].empname);
        printf("Enter the name of the department :\n ");
        gets(e[i].department);
        printf("Enter the number of the employee :\n ");
        scanf("%lf",&e[i].empno);
        printf("Enter the salary of the employee :\n");
        scanf("%d",&e[i].salary);
    }
    // calling display function
    display(e);
    return 0;
}