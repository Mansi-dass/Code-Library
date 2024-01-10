#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *head)
{
    while (head != NULL)
    {

        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("End\n");
}

struct Node* deleteAthead(struct Node *head)
{
    return head->next;
}

int main(){
    struct Node *n1;
    struct Node *n2;
    struct Node *n3;
    struct Node *n4;
    struct Node *head;

    // Node *n1,*n2,*n3 ,*n4;
    n1 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));
    n4 = (struct Node *)malloc(sizeof(struct Node));

    head= n1;
    n1->data = 4;
    n1->next = n2;

    n2->data = 8;
    n2->next = n3;

    n3->data = 9;
    n3->next = n4;

    n4->data = 2;
    n4->next = NULL;

    // Printing Linked List
    traversal(head);
    // Deletion operation at beginning of singly linked List
    head= deleteAthead(head);
    // Printing Linked List after deletion
    traversal(head);
    return 0;
}