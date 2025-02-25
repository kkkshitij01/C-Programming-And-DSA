#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void LinkedListTraversal(struct node *head)
{
    struct node *p = head;
    do
    {
        printf("Element is %d \n", p->data);
        p = p->next;
    } while (p != head);
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

    LinkedListTraversal(head);

    return 0;
}