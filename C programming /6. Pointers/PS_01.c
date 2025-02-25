// Write a program to print a address of a variable. Use the address to print the variable
#include<stdio.h>
int main()
{
    int a = 48;
    int *b = &a;

    printf("The address of variable a is %u\n",b);
    printf("Checking the answer :- %u\n",&a);
    printf("The int at %u address is %d\n",&a ,*b);

}
