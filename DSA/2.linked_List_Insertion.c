#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;

// This to display the linkedList
void display(Node *pointer)
{
    for (int i = 0; pointer != NULL; i++)
    {
        printf("%d Element : %d \n", i + 1, pointer->data);
        pointer = pointer->next;
    }
}
// Insert Node at the first position;
struct node *insertAtFirst(Node *head, int newData)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->next = head;
    ptr->data = newData;
    return ptr;
}

int main()
{
    Node *head;
    Node *second;
    Node *third;

    head = (Node *)malloc(sizeof(struct node));
    second = (Node *)malloc(sizeof(struct node));
    third = (Node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 34;
    third->next = NULL;

    display(head);
    printf("\n");

    head = insertAtFirst(head, 898);
    display(head);
    printf("\n");
    return 0;
}