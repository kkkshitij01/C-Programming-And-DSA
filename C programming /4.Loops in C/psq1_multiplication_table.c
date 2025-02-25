// write a progarm to print the multiplication table using loop?
#include<stdio.h>
int main()
{
    int i=1,a;
    printf("\n");
    printf("Enter a natural number\n");
    scanf("%d",&a);
    printf("The multiplication table of %d\n",a);

    while(i<=10)
    {
        printf("%d\n",i*a);
        i++;
    }
    return 0;
}