//write a progarm to print sum of fisrt n natural numbers using differnt loops?
#include <stdio.h>

int main()
{
    int a, i, sum = 0;
    printf("Enter a natural number \n");
    scanf("%d", &a);
    // now using for loop
    for(int i=1;i<=a;i++){
        sum += i;
    }





    // using while loop
    // while (i <= a)
    // {
    //     sum += i;
    //     i++;
    // }




    // using do while loop;
    // do{
    //     sum += i;
    //     i++;
    // }
    // while(i<=a);

    printf("Sum of first %d natural numbers is %d\n", a, sum);

    return 0;
}