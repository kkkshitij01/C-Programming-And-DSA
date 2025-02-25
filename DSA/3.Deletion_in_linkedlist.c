#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *ptr)
{
    for (int i = 0; ptr != NULL; i++)
    {
        printf("%d element : %d\n", i + 1, ptr->data);
        ptr = ptr->next;
    }
}

// Deletion of head from the linked list;
struct node *deleteHead(struct node *head)
{
    head = head->next;
    return head;
}
// Deleteion of a node from between ;
struct node *deleteBetween(struct node *head, int index)
{
    for (int i = 1; i != (index - 1); i++)
    {
        head = head->next;
    }
    struct node *ptr = head;
    head = head->next;
    ptr->next = head->next;
    free(head);
    return ptr;
}
// Deletion of the last node;
struct node *removeLast(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 1; q->next != NULL; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return p;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 34;
    third->next = fourth;

    fourth->data = 45;
    fourth->next = NULL;

    display(head);
    // head = deleteHead(head);
    // deleteBetween(head, 2);
    removeLast(head);
    printf("\n");
    display(head);
    return 0;
}
