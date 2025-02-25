#include<stdio.h>
int main()
{
    int   a = 2;
    int  *b = &a;
    int **c = &b;
    printf("%u\n",b);
    printf("%u\n",&a);
    printf("\n");

    printf("%u\n",&b);
    // calling the value stored in a using pointer to pointer
    printf("%u\n",**c);
    return 0;

}