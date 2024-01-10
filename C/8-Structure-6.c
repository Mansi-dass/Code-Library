// Create a structure representing a bank account of a customer. What fields did you use and why?
#include <stdio.h>

struct customer{
    char custom_name[32];
    int acc_no;
    int phone_num;
    int balance;

};
void display(struct customer c){
 printf(" Customer name: %s\n",c.custom_name);
    printf(" Account number of the customer:%d\n",c.acc_no);
    printf(" phone number of the customer: %d\n",c.phone_num);
    printf(" Balance in the account: %d\n",c.balance);

}
int main(){
    struct customer c1;
    printf("Enter customer name: ");
    gets(c1.custom_name);
    printf("Enter Account number of the customer: ");
    scanf("%d",&c1.acc_no);
    printf("Enter phone number of the customer: ");
    scanf("%d",&c1.phone_num);
    printf("Enter balance in the account: ");
    scanf("%d",&c1.balance);

    display(c1);
    return 0;
}