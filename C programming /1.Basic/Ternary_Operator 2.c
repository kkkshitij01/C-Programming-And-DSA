#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age\n");
    scanf("%d",&age);

    // Ternary is a single line program defined below
    age >= 18 ?        printf("Adult\n"):     printf("Child\n");
    // Condition   first printing statement     second printing statement
    return 0;
}