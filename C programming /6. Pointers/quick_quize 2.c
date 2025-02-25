#include<stdio.h>
int main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;
    printf("The value of x is   : %d\n",x);
    printf("The value of ptr is : %d\n",*ptr);
    printf("\n");

    *ptr += 5;

    printf("The value of x is   : %d\n",x);
    printf("The value of ptr is : %d\n",*ptr);
    printf("\n");

    (*ptr)++;
    printf("The value of x is   : %d\n",x);
    printf("The value of ptr is : %d\n",*ptr);
    printf("\n");
    return 0;
}