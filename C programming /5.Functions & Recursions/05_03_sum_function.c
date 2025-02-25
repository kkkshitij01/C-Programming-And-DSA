#include<stdio.h>
// sum is a function which takes a and b as and input and returns an integer 

int sum (int a ,int b); // function prototype decleration 
// here a and b are the parameters 
// and the values which are 7 and 3 will be the arguments

int main()
{
    int result,d;
    result = sum(7, 3); // Function call
    printf("The Result is %d\n",result);

    d = sum(7, 8);
    printf("The Value of d is %d\n",d);
}

int sum (int a, int b){
    // C used here is differnt from the C used in the main function 
    // and do not have any relation with each other.
    int c; 
    c = a + b;
    return c; 
}


/*          Notes 
1. parameters are the values or the variable place holders in the function 
   defination EX:- a and b
2. Arguments are the actual values passed to the function to make a call. Ex 1 and 2.
3. A function can only return one value at a time.
