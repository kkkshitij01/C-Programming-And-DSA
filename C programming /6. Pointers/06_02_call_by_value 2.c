#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 5, b = 6;
    // printf("Enter the first Number\n");
    // scanf("%d", &a);
    // printf("Enter the seonc Number\n");
    // scanf("%d", &b);

    printf("The Sum of %d and %d is %d\n", a, b, sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 74635; // the value of this a and b in fucntion can not change 
    b = 8734;  // the main function value 
    return c;
}
/* we can cal the int by 2 wasy 
1. Call by value 
1. Cal by the refence */