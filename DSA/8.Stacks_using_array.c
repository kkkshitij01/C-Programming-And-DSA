#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size; // size of the array
    int top;  // points to the last element of the array
    int *arr;
};
void isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("The stack is Empty\n");
    }
    else
    {
        printf("The stack is not Empty\n");
    }
}
void isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("The stack is full \n");
    }
    else
    {
        printf("The stack is not full \n");
    }
}

int main()
{
    // one way of making the stack
    //  struct stack s;
    //  s.size=43;
    //  s.top=-1;
    //  s.arr=(int *)malloc(s.size*sizeof(int));

    // second way

    struct stack *s = (struct stack *)malloc(sizeof(*s));

    s->size = 2;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    isEmpty(s);

    // Pushing an element in the stack
    s->arr[0] = 12;
    s->top++;

    // Pushing the second element in the stack
    s->arr[1] = 12;
    s->top++;

    isFull(s);

    return 0;
}