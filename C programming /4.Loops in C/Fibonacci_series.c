// Printing Fibonacci series using loops;
#include<stdio.h>
int main()
{
    int numb,a = 1,b = 1,c;
    printf("Enter a number\n");
    scanf("%d",&numb);
    for (int i=0 ; i<=numb; i++)
    {
        printf("%d\n",a);
        c = a + b ;
        a = b;
        b = c;
    }
    return 0;
}