//Create an array of 10 numbers. Verify using pointer arithmtic that (ptr +2)
//Points to the third element where as ptr is a pointer which points to the first
// element.
#include<stdio.h>
int main()
{
    int arr[] = {12  ,13,14,15,16};
    int *ptr = &arr[0];
    printf("This is the first element of the array : %d\n",*ptr);
    printf("This is the third element of the array : %d\n",*ptr+2);
}    
   