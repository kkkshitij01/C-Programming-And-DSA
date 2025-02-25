#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// this is the function to display the stack;
void display(struct node *head)
{
    for (int i = 1; head->next != NULL; i++)
    {
        printf("%d element is : %d \n", i, head->data);
        head = head->next;
    }
}

// Push function starts over here
struct node *push(struct node *head, int data)
{
    // here we are checking if the
    struct node *n = (struct node *)malloc(sizeof(struct node));

    n->data = data;
    n->next = head;
    head = n;
    return n;
}
// Function to pop an element from the stack ;
void pop(struct node **head) // Using pointer to pointer
{
    if (head == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        int numb = (*head)->data;
        *head = (*head)->next;
        printf("%d Element is removed from the stack \n", numb);
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head = push(head, 234);
    head = push(head, 45);
    head = push(head, 67);
    display(head);

    pop(&head); // Pasing address of head as call by refrence

    printf("\n");

    display(head);
    return 0;
}