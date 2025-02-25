#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    int i = 1;
    struct node *p = head;
    do
    {
        printf("%d Element is %d \n", i, p->data);
        p = p->next;
        i++;
    } while (p != head);
}
struct node *firstElement(struct node *head, int newData)
{
    struct node *p = head;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    p = p->next;
    for (int i = 1; p->next != head; i++)
    {
        p = p->next; // now p points at the last node of the linked list;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = newData;
    return ptr;
}
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

    head->next = second;
    head->data = 12;

    second->next = third;
    second->data = 34;

    third->next = fourth;
    third->data = 56;

    fourth->next = head;
    fourth->data = 589;

    display(head);
    printf("\n");
    inBetween(head, 7834, 3);
    display(head);

    return 0;
}