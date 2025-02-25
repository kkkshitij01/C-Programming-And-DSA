#include<stdio.h>

int factorial(int x);

int main()
{
    int a=5;
    printf("The value of Factoria %d is %d \n",a ,factorial(a));
}

int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }

        printf("Calling factorial %d\n",x);
        return x * factorial(x-1);
}

/*                            Note  

1.Recursion is sometimes the most direct way to code an algoithm.
2.The condition which doesn't call the function any further in the recursive function is called as the 
is called the basic condition.
3.Some time due to a basic mistake by the programmer a recursive function can keep running without 
returning resultion the memory error
*/