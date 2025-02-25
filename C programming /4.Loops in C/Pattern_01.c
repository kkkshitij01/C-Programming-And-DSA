#include <stdio.h>
int main()
{
    int numb;
    printf("Enter A random number\n");
    scanf("%d", &numb);
    for (int i = 0; i < numb; i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0; 
} 
