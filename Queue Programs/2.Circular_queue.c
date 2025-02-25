// Circular queue program
#include <stdio.h>
#include <stdlib.h>
struct circularQueue
{
    int size;
    int front;
    int back;
    int *arr;
};
// Inqueue operation
void inqueue(struct circularQueue *ptr, int value)
{
    // this is to check if the queue is full or not;
    if ((ptr->back + 1) % ptr->size == ptr->front) // tp
    {
        printf("queue overflow\n");
    }
    else
    {
        ptr->back = (ptr->back + 1) % ptr->size;
        ptr->arr[ptr->back] = value;
        printf("%d inqueued \n", value);
    }
}
// Dequeue operation
void dequeue(struct circularQueue *q)
{
    // to check if the queue is empty or not
    if (q->back == q->front)
    {
        printf("queue empty\n");
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        int temp = q->arr[q->front];
        printf("%d element is removed from queue \n", temp);
    }
}
int main()
{
    struct circularQueue *q = (struct circularQueue *)malloc(sizeof(struct circularQueue));
    q->size = 5;
    q->front = q->back = 0; // here we take the value of frnt and back = 0;
    // other wise the program will not work correctly;
    q->arr = (int *)malloc(q->size * sizeof(int));
    inqueue(q, 2);
    inqueue(q, 3);
    inqueue(q, 4);
    inqueue(q, 5);
    dequeue(q);
    inqueue(q, 5);
    return 0;
}