#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void display(struct node *ptr)
{
    for (int i = 1; ptr != NULL; i++)
    {
        printf("%d Index = %d \n", i, ptr->data);
        ptr = ptr->next;
    }
}
struct node *atFirst(struct node *ptr, int newData)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = newData;
    new->prev = NULL;
    ptr->prev = new;
    new->next = ptr;
    return new;
}
struct node *between(struct node *ptr, int newData, int index)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    for (int i = 1; i != index - 1; i++)
    {
        ptr = ptr->next;
    }
    new->data = newData;
    new->next = ptr->next;
    ptr->next = new;
    new->prev = ptr;
    ptr->prev = new;
    return new;
}
int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    first->data = 23;
    first->prev = NULL;
    first->next = second;

    second->data = 34;
    second->prev = first;
    second->next = third;

    third->data = 54;
    third->next = fourth;
    third->prev = second;

    fourth->data = 98;
    fourth->prev = third;
    fourth->next = NULL;
    display(first);

    between(first, 3948, 2);
    printf("\n");

    display(first);

    return 0;
}