#include<stdio.h>
int main()
{
    char *CanChangeString = "Kshitij Gupta "; //we can modify string made using pointers.
    puts(CanChangeString);
    CanChangeString = "Gupta Kshitij";
    printf("Modified Pointer String::\t");
    puts(CanChangeString);


    char cannotChange[] = "Kshitij Gupta"; //Sting Declared like this cannot be changed
    puts(cannotChange);
    // cannotChange = "Gupta Kshitij";
}