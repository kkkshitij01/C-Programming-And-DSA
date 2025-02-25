#include<stdio.h>
void some(int *array, int n); //Using pointers as array 
//can use  //arry[]   // This as well 
int main()
{
    int array[] = {5,2,3,4,6,6,7};
    some(array,7);
    return 0;
}
void some(int *array, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
        // printf("%d\t",*arry+i); Using pointers for printing the array
    }
    printf("\n");
}