//Create a string firstName and lastName to store details of the user and 
//print all the charachter using loops.
#include <stdio.h>
void string(char arr[]);
int main()
{
    char first[] = "Kshitij"; //this is string for first name;
    char Last[] = "Gupta";  //This is string for the last name;
    string(first);
    string(Last);
    return 0;
}
void string(char arr[])
{
    for(int i=0;arr[i] != '\0' ;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\t");
}