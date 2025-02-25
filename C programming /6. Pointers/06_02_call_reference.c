//Write a program to swap the two numbers using pointers in C?
#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{ 
    int a=3 , b=4;
    printf("The value of a and b before swap is %d and %d\n",a,b);
    // wrong_swap(a , b); this didn't works as it is called by the value
    swap(&a,&b);// this will work as it is called by the refrence 
    printf("The value of a and b after swap is %d and %d\n",a,b);

}
void wrong_swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
