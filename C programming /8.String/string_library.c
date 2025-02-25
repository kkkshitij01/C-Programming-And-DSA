#include<stdio.h>
#include<string.h>//will have to include this library to use these pre-defined Function
int main()
{
    //                             strlen
    //it is used for counting the number of elements in the string.
    char name[] = "Kshitij";
    int length = strlen(name);
    printf("The length of the string is: %d\n",length);

    //                           strcyp(new_string,old_string)
    //it copies the values of the old string to the new string.
    char new_string[] = "newSTR";
    char old_string[] = "oldSTR";
    strcpy(new_string,old_string);
    printf("This is the new string whose values are copied from the old string::\t");
    puts(new_string);


    //                         strcat         
    // It combimes the first string and the second string;

    char first_str[100] = "Hello ";
    // Always have to declare the size of the first string which should be enough to 
    //store the other string otherwise the output will be a error.  
    char sec_str[] = "World";
    strcat(first_str,sec_str);
    // the value will be stored in the first string of the second string.
    puts(first_str); 


    //                         strcmp
    // It compares the askye  first string and the second string;
    // it return values baised on ascii values of the char
    char cmpfirst[] = "apple";
    char cmpfsec[] = "banana"; //ascii balue of b is > by 1 then 'a' thus the result is -1;
    char some= 'a';
    printf("%d\n",strcmp(cmpfirst,cmpfsec));



    //Another example of strcmp:
    char something[]=    "HHHB";
    char some_[]=    "HHHA";
    printf("Result of another example is %d\n",strcmp(something,some_));

    return 0;
}