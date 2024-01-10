/*

    LINKED LIST THROUGH C
--> create node with struct & also typedef can be used ,just remember to refer Node *next as struct Node* next
--> need to create pointers* for creating nodes in main class
--> if want to return Node back to function call need to write complete - struct Node* or (if using typedef then Node*)
--> for reffering to the pointer data,need to use arrow method to access member- head->data && head-> next
--> for creating new node or creating LinkedList need to allocate memory for the struct so malloc function is used
        (struct Node *)malloc(sizeof(struct Node)) this statement is must
--> stdlib.h is need to be imported to use memory allocation
--> And don't forger to printf() need %d,%c,%f,%s for output
--> Above points is must to remmemeber as it is the main diff from java code other than that logic remain same.

*/

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
    printf("end\n");
}

struct Node *insertAthead(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

struct Node *inserAtPos(struct Node *head, int data, int pos)
{
    if (pos == 1)
        return insertAthead(head, data);
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node *cur = head, *temp;
    while (cur != NULL && pos > 1)
    {
        temp = cur;
        cur = cur->next;
        pos--;
    }
    newNode->next = cur;
    temp->next = newNode;
    return head;
}

struct Node *deleteAthead(struct Node *head)
{
    return head->next;
}

struct Node *deleteAtPos(struct Node *head, int pos)
{
    if (pos == 1)
        return deleteAthead(head);
    struct Node *cur = head;
    while (cur != NULL && pos - 1 > 1)
    {
        cur = cur->next;
        pos--;
    }
    if (cur->next == NULL)
        cur->next = NULL;
    else
        cur->next = cur->next->next;
    return head;
}

struct Node *midElement(struct Node *head)
{
    struct Node *slow = head, *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    struct Node *n1;
    struct Node *n2;
    struct Node *n3;
    // Node *n1,*n2,*n3;
    n1 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));

    n1->data = 4;
    n1->next = n2;

    n2->data = 8;
    n2->next = n3;

    n3->data = 9;
    n3->next = NULL;

    traversal(n1);
    // struct Node * head;
    // head=inserAtPos(n1, 10 ,4);
    // head=inserAtPos(n1, 11 ,5);
    // struct Node *head = deleteAthead(n1);
    // head = deleteAtPos(n1,1);
    // printf("%d\n",(midElement(head))->data);
    // traversal(head);
    return 0;
}
