// factorial of a given number using recursion.
#include<stdio.h>
int factorial(int n);
int main()
{
    int numb;
    printf("Enter a number to find it's factorial\n");
    scanf("%d",&numb);
    printf("The factorial of %d is %d \n",numb,factorial(numb));
    return 0;
}
// there is only one difference in the program of factorial and of sum of nth
// nth natural number which is of * and + in the just a single place;
int factorial(int n)
{
    int nth , n_1 = 1; 
    if(n==1 || n==0)
    {
        return 1;  // base case;
    }
    n_1 = factorial(n-1);
    nth = n_1 * n;
    return nth;
} 