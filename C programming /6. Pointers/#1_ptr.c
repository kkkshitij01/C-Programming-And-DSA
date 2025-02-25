#include<stdio.h>
int main()
{
    int age = 22 ;
    int *ptr= &age;
    int _ptr= *ptr;
    //* is known as the value at address operator


    //   DIFFERENT WAYS TO PRINT THE VALUES IN THE BLOCKS 
    printf("Printing the value of _ptr %d\n",_ptr);
    printf("another way to print the value at address is %d \n ",*(&age));

    printf("\n");
    printf("Printing the address stored at ptr (age) %u \n",ptr);
    printf("Direct printint the address of age %u \n",&age);

    // USE OF %u and %p IN PRINTING THE ADDRESS 
    printf("\n");
    //  %u printing address in unsigned format
    printf("Printing the value of ptr %p \n",ptr);
     // %p printing address in hexadecimal form
    printf("\n");

    printf("The address of PTR %u\n",&ptr);

    // *ptr will print the value of the int whose adderess is stored in that variable
}