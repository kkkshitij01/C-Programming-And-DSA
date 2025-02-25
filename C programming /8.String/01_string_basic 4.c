//Strings are defined as an array of characters. The difference between a character 
// array and a string is the string is terminated with a special character ‘\0’.
#include<stdio.h>
int main()
{
    //First way of Decleration.
    char name[] = {'k','s','h','i','t','i','j','\0'};
    printf("First : %s\n",name);
    // \0 is 

    //Second way of Decleration
    char _name[] = "Kshitij Gupta";
    printf("Second : %s\n",_name);

    // STRING FORMAT SPECIFIER  %S
    char name_[50];
    printf("Enter your Name:\n");
    scanf("%s",name_);  // In string while using %s we don't need to -- 
    //-- to use address operator(&);
    printf("Your Name is %s\n",name_);

    return 0;
}