#include<stdio.h>
int main()
{
    int n;
    do{
        printf("Enter a number :\n");
        scanf("%d",&n);
        printf("Your Entered Number is %d\n",n);
        if(n%2 != 0)
        {
            printf("END OF THE PROGRAM\n");
            break;
        }
    }while(1);
}