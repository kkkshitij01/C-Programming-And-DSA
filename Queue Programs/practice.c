#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int *arr;
    int front;
    int back;
};
void inqueue(struct queue *ptr, int value)
{
    if (ptr->back == ptr->size - 1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        ptr->back++;
        ptr->arr[ptr->back] = value;
    }
}
void dequeue(struct queue *ptr)
{
    if (ptr->back == ptr->front)
    {
        printf("Queue Empty\n");
    }
    else
    {
        ptr->front++;
        int temp = ptr->arr[ptr->front];
        printf("%d is removed from queue\n", temp);
    }
}
int main()
{
    struct queue *qu = (struct queue *)malloc(sizeof(struct queue));
    qu->front = qu->back = -1;
    qu->size = 5;
    qu->arr = (int *)malloc(qu->size * sizeof(struct queue));

    inqueue(qu, 12);
    inqueue(qu, 54);
    inqueue(qu, 78);
    inqueue(qu, 90);
    inqueue(qu, 01);
    dequeue(qu);
    dequeue(qu);
    dequeue(qu);
    inqueue(qu, 01);
}