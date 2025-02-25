// Pointers is used to save the address of different integers.
#include <stdio.h>
int main()
{
    int i = 34;
    int *j = &i;  // J will now store the address of I;
    int **k = &j; // this is pointer to a pointer;
    printf("The value of I is %d\n", i);
    printf("The value of I is %d\n", *j); // * is used to print the value stored in the block whose
    // whose address is stored in it;
    printf("1.The Address of I is %u\n", &i);
    printf("1.The Address of I is %u\n", j);
    printf("The stored value at J is %u\n", *(&j));
    printf("2.The Address of J is %u\n", &j);
    printf("The address of K is %u\n", &k);
    printf("The value at address K is %u\n", **(&k));
    return 0;
}
/*                               POINTS TO REMEMBER

1. * Is used to print the value stored in the block whose address is stored in that block
Ex :- J is storing the address of i
Hence by using *j will print the value stored in I which is 34.

2. %u is used to print the address of an bolck
3. &j is used to print the address of J which is storing the address value of I.

*/
