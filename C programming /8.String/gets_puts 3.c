// gets and puts are used against printf and scanf fucntions as it can store multiple words
// it is also dangerous to use it and not prefered in programming
#include<stdio.h>
int main()
{
    char apple[100];
    printf("Type anything you want:\n");
    // gets(apple);// Using this to store characters in apple string.

    //the Safe way to scan multiple words we use  
    //fget(array,n,stdin);
    //where stdin means standard input ;
    fgets(apple,100,stdin);
    printf("This is the printing statement using puts()function \n");
    puts(apple);//Using this to store apple string 
    return 0;
}