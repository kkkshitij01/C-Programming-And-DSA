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

    head->data = 1;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 1223;
    third->next = end;

    end->data = 1234;
    end->next = NULL;
    display(head);
    return 0;
}