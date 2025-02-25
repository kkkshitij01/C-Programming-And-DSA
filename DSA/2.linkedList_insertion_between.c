#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insertionAtIndex(struct node *head, int newData, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    for (int i = 1; i != (index - 1); i++)
    {
        head = head->next;
    }
    ptr->next = head->next;
    ptr->data = newData;
    head->next = ptr;
    return ptr;
}
// Function to display the linked list;
void display(struct node *head)
{
    for (int i = 0; head != NULL; i++)
    {
        printf("%d Elment : %d\n", i + 1, head->data);
        head = head->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 24;
    head->next = second;

    second->data = 25;
    second->next = third;

    third->data = 46;
    third->next = NULL;
    display(head);
    insertionAtIndex(head, 9879, 2);
    printf("\n");
    display(head);
    return 0;
}
