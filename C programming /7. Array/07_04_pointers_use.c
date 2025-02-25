#include<stdio.h>
int main()
{
    int adhar[5];
    int *ptr = &adhar[0]; // Using pointers and incrementing them for I/O; 
    for(int i=0; i<5 ; i++)
    {
        printf("Enter the %d Adhar Number\n",i);
        scanf("%d",ptr+i);
        //Incrementing address of adhar to store the values 
        // another way is //  adhar[i]; where i will increment;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",(*ptr+i));
    }

}