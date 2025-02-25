//Write a function to calculate the sum , product , average of 2 numbers.
//print the average in the main function;
#include<stdio.h>
void calc(int *a, int *b ,int*c);
int main()
{
    int sum , product , average = 0;

    printf("Enter the first number \n");
    scanf("%d",&sum);

    printf("Enter the Second number \n");
    scanf("%d",&product);

    calc( &sum , &product, &average );

    printf("The Sum of the two numbers is %d\n",sum);
    printf("The Product of the two numbers is %d\n",product);
    printf("The Average of the two numbers is %d\n",average);
    return 0;
}
void calc(int *sum , int *product , int *average)
{
    int a,b;
    a = *sum;
    b = *product;
    *sum = a + b; 
    *product = a*b; 
    *average = (a+b)/2;
}