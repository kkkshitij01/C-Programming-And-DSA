// Function syntax

#include <stdio.h>
void display(); // function prototype
int main()
{
    int a;
    printf("1.Initalilaizing of the Display function\n ");
    display(); // this is function calling
    printf("3.Display function finished its work\n");
}

void display()
{
    printf("2.This is the main printing Function\n"); // this is function decleration
}

/*    IMPORTANT POINTS OF FUNCTION   
1. Execution of a function starts from main() function.
2. A c program can have more than one function.
3. Every function can be called directly or indirectly from main();

TYPES OF FUNCTION
1. LIBRARY FUNCION:- Commonly required function grouped together in the library.
EX main , printf , rand etc

2.USER FUNCTION:- These are the functions declared and defined by the user.



