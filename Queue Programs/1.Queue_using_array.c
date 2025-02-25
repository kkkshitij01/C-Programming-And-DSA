#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;
    int back;
    int *arr;
};
void inqueue(struct queue *q, int value)
{
    if (q->back == q->size - 1) // to check if the Queue is full
    {
        printf("Queue overflow \n");
    }
    else
    {
        q->back++;
        q->arr[q->back] = value;
    }
}
void dequeue(struct queue *q)
{
    if (q->back == q->front) // To check if the queue is empty
    {
        printf("Queue is Empty \n");
    }
    else
    {
        q->front++;
        int numb = q->arr[q->front];
        printf("%d is dequeued from queue\n", numb);
    }
}
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 4;
    q->front = q->back = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    // Inqueueing few elements;
    inqueue(q, 34);
    inqueue(q, 44);
    inqueue(q, 2);
    inqueue(q, 76);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    inqueue(q, 76);
}