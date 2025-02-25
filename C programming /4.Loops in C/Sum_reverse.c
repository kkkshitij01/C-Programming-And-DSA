#include<stdio.h>
int main()
{
    int n,sum = 0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        sum = sum + i;
    }
        printf("The is sun of first %d natural numbers is %d\n",n,sum);
        printf("\n");
        printf("And the reverse of the numbers is : \n");

        for( int i=n;i>=1;i--)
        {
            printf("%d\n",i);
        }

}