// Stack Using Linked List
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;
Node* top=NULL;

void push(int value){
    Node* newNode= malloc(sizeof(Node));
    newNode->data= value;
    if(top == NULL){
        newNode->next=NULL;
    }else{
        newNode->next=top;
    }
    top = newNode;
    printf("Node inserted of value: %d\n", value);
}

int pop() {
    if (top == NULL) {
        printf("\nStack Underflow\n");
    } else {
        // Node *temp = top;
        int temp = top->data;
        top = top->next;
        return temp;
    }
}


int main(){
    push(8);
    push(2);
    push(7);
    int Pop = pop();
    printf("Node popped: %d", Pop);
    return 0;
}