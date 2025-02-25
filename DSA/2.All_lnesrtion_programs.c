#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    for (int i = 0; head != NULL; i++)
    {
        printf("%d Element : %d\n", i + 1, head->data);
        head = head->next;
    }
}

// Insertion in linked list in between of any node;
struct node *inBetween(struct node *head, int newData, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    for (int i = 1; i != (index - 1); i++)
    {
        head = head->next;
    }
    ptr->next = head->next;
    head->next = ptr;
    ptr->data = newData;
    return ptr;
}

// Insertioin of a node after a given node;
struct node *afterNode(struct node *previous, int newData)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = previous->next;
    ptr->data = newData;
    previous->next = ptr;
    return ptr;
}
// Insetion of a node at the last of the linked list
struct node *atLast(struct node *head, int newData)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = ptr;
    ptr->data = newData;
    ptr->next = NULL;
    return ptr;
}
// Insertion in linked list at the first place
struct node *atfirst(struct node *head, int newData)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = newData;
    ptr->next = head;
    return ptr;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *end;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    end = (struct node *)malloc(sizeof(struct node));

    head->next = second;
    head->data = 23;

    second->data = 34;
    second->next = third;

    third->data = 45;
    third->next = end;

    end->data = 78;
    end->next = NULL;

    display(head);
    printf("\n");
    // insertionAtNode(third, 983);
    display(head);

    return 0;
}