#include <stdio.h>
#include <stdlib.h>
// Defined the structure for the node;
struct node
{
    int data;
    struct node *next;
};

// Function to display the linked list;
void display(struct node *head)
{
    for (int i = 0; head != NULL; i++)
    {
        printf("%d Element : %d\n", i + 1, head->data);
        head = head->next;
    }
}
// Function to insert at the last of the linked list;
struct node *insertAtLast(struct node *head, int newData)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = ptr;
    ptr->next = NULL;
    ptr->data = newData;
    return ptr;
}

// function to insert a new node after a given note.
struct node *insertAfterNode(struct node *head, struct node *prevNode, int newData)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = newData;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return ptr;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *last;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    head->data = 24;
    head->next = second;

    second->data = 25;
    second->next = third;

    third->data = 46;
    third->next = last;

    last->data = 56;
    last->next = NULL;

    display(head);
    printf("\n");
    // last = insertAtLast(head, 489);
    insertAfterNode(head, second, 8945);
    display(head);
    return 0;
}
