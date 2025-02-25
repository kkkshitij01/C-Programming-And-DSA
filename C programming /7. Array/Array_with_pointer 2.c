//How to use pointer to to store the values in array.
#include<stdio.h>
int main()
{
    int marks[4];
    int *ptr = &marks[0];
    for(int i=0 ;i<4;i++)
    {
        printf("Enter the marks of %d student\n",i+1);
        scanf("%d",ptr+i);
        //or  ptr++

    }
    for(int i=0 ;i<4;i++)
    {
        printf("the marks of %d student is %d\n",i+1,marks[i]);
    }
}