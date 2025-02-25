#include<stdio.h>
int main()
{
    int i = 21;
    int *j = &i;
    printf("The Address of I is %u\n",j); 
    j++;// incrementing the address value
    //which happens on the basis of the type of variable which is being stored in it.

    printf("The Address of I is %u\n",j);


    // We can also perform subtraction and comperation of two pointers.
    int age= 21, age_ = 22;
    int *ptr = &age , *ptr_ = &age_;
    printf("the address of age is %u and age_ is %u\n\n",ptr,ptr_);
    printf("The subtraction of ptr and _ptr is %d\n",ptr-ptr_);
    //The ans is 1 which means 4 byts as int holds 4byts.

    // now comparint two pointers
    ptr_ = &age;
    printf("Comparisition : %u\n",ptr == ptr_);
    // 1 in the result means True

    return 0;

}