// Stack using array
#include <stdio.h>
# define capacity 4

int arr[capacity];
int top=-1;

void push(int element){
    if(top==capacity-1){
        printf("Stack is full!\n");
        return;
    }
    top++;
    arr[top]=element;
}
void pop(){
    if(top==-1) {
        printf("Stack is empty!\n");
        return;
    }
    int ans= arr[top];
    top--;
    printf("Pop operation popped element: %d \n",ans);
}
void peek(){
    if(top==-1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Peek operation shows top element: %d \n",arr[top]);
}
int isEmpty(){
    return top==-1;
}
int main(){

    // push operation
    push(8);
    push(7);
    push(3);
    // peek operation
    peek();
    // pop operation
    pop();
    pop();
    // isEmpty operation
    int isEmpt= isEmpty()==1? printf("Stack is Empty"): printf("Stack is Not Empty");
    // peek Operation
    peek();
    return 0;
}