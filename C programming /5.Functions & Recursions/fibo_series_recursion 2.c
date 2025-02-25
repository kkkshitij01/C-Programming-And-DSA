// Fibonacci numbers using recursion
#include<stdio.h>
int fibonacci(int numb);
int main()
{
    int numb;
    printf("Enter a number\n");
    scanf("%d",&numb);
    printf("%dth fibonacci is %d\n",numb,fibonacci(numb));
    return 0;
}
int fibonacci(int numb)
{
    int n_1,n_2,fibn;
    if(numb == 1)
    {
        return 1;
    }
    else if( numb == 0 )
    {
        return 0;
    }
    n_1 = fibonacci( numb - 1 );
    n_2 = fibonacci( numb - 2 );
    fibn = n_1 + n_2;
    // printf("%d th fibonacci is %d\n",numb,result);
    return fibn; 
}
