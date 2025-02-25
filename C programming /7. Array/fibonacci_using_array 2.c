// Print fibonacci series using array and function in c ;
#include<stdio.h>
void fib(int n);
int main()
{
    int n;
    printf("Enter a Random Natural number \n");
    scanf("%d",&n);
    fib(n);
}
void fib(int n)
{
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t",fib[0]);
    printf("%d\t",fib[1]);
    for(int i=2;i<=n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t",fib[i]);
    } 

    //  ANOTHER WAY TO PRINT THE FIBONACCI SERIES;
    printf("\n");
    int a=0 , b=1 , c,i;
    for(i=0;i<=n;i++)
    {
    fib[i]= a;
    printf("%d\t",fib[i]);
    c = a+b; 
    a = b; 
    b = c;
    }
}