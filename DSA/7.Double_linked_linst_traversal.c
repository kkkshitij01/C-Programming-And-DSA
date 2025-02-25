#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
// Forward Traversal
void Traversal(struct node *head)
{
    for (int i = 0; head != NULL; i++)
    {
        printf("%d Element is %d \n", i + 1, head->data);
        head = head->next;
    }
}
void revTraversal(struct node *tail)
{
    for (int i = 0; tail != NULL; i++)
    {
        printf("%d Element is %d \n", i + 1, tail->data);
        tail = tail->prev;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *tail;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;
    head->prev = NULL;

    second->data = 23;
    second->next = third;
    second->prev = head;

    third->data = 34;
    third->next = tail;
    third->prev = second;

    tail->data = 45;
    tail->next = NULL;
    tail->prev = third;

    revTraversal(head);
    return 0;
}