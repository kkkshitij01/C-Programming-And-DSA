//Sun of First natural Numbers Using recursion and function?
#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter a Random Number\n");
    scanf("%d",&n);
    printf("The sum of First %d numbers is %d\n",n,sum(n));
}
int sum(int n)
{
    if( n == 1)
    {
        return 1;
    }
    int n_1;
    printf("%d\n",n_1);
    n_1 = sum(n-1);
    int nth = n_1 +n;
    return nth;
}
