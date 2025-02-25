#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size, top, *arr;
};
// 1. Push Operation
void push(struct stack *ptr, int value)
{
    if (ptr->top == ptr->size - 1)
    {
        printf(" STACK OVERFLOW\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
// 2. POP Operation
void pop(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf(" The stack is Empty\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("Popped %d from the stack\n", val);
    }
}
// 3. PEAK Operation
void peak(struct stack *ptr, int index)
{
    if (ptr->top == -1)
    {
        printf("The stack is empty \n");
    }
    else
    {
        int val = ptr->arr[ptr->top - index + 1];
        printf("The value at %d index is %d \n", index, val);
    }
}
// 4. stack TOP Operation
void top(struct stack *ptr)
{
    printf("The top most element of the stack is : %d \n", ptr->arr[ptr->top]);
}
// 5. stack Bottom Operation
void bottom(struct stack *ptr)
{
    printf("The bottom most element of the stack is : %d \n", ptr->arr[0]);
}
int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 163);
    push(s, 1512);
    push(s, 1400);
    push(s, 139);
    push(s, 9948);

    peak(s, 3);

    pop(s);

    top(s);
    bottom(s);
    return 0;
}