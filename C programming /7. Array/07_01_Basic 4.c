#include<stdio.h>
int main()
{
    int computer[4];
    printf("Enter the Marks of Student 1\n");
    scanf("%d",&computer[0]);

    printf("Enter the Marks of Student 2\n");
    scanf("%d",&computer[1]);

    printf("Enter the Marks of Student 3\n");
    scanf("%d",&computer[2]);

    printf("Enter the Marks of Student 4\n");
    scanf("%d",&computer[3]);

    printf("The marks of Student 1 is %d , 2 is %d , 3 is %d and 4 is %d\n",computer[0],computer[1],computer[2],computer[3]);
    return 0;
}