//take the input from the user using %c;
#include<stdio.h>
int main()
{
    char str[100];
    char ch;
    printf("Enter any character \n");
    for(int i=0; ch!='\n'; i++)
    {
        scanf("%c",&ch);
        str[i] = ch;
    }
    printf("This is the output: \n");
    puts(str);
}