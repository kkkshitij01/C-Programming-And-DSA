#include <stdio.h>
#include <stdlib.h>
struct node *front = NULL;
struct node *back = NULL;

struct node
{
    int data;
    struct node *next;
};
void inqueue(int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("Queue overFlow \n");
    }
    else
    {
        new->data = data;
        new->next = NULL;
        if (front == NULL)
        {
            front = back = new;
        }
        else
        {
            back->next = new;
            back = new;
        }
    }
}
void dequeue()
{
}
int main()
{
}