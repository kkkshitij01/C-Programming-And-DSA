// Write a program to calculate the sum of the numbers
// occurring in the multiplication table.
#include <stdio.h>

int main()
{
    int i, a,sum=0,mult=0;
    printf("Enter a natural number\n");
    scanf("%d",&a);

    // using for loop
    for(int i=1;i<=10;i++){
        mult=i*a;
        sum+=mult;
    }

    // using while loop
    // while (i <= 10)
    // {
    //     mult = i*a;
    //     i++;
    //     sum+=mult;
    // }
    
    printf("The sum is %d\n",sum);
    return 0;
}