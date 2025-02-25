#include <stdio.h>
int stringSize(char arr[]);
void print_string(char arr[]);
int main()
{
    char firstName[100];
    printf("Enter your first name\n");
    fgets(firstName, 100, stdin);
    // printf("The Length of the string is %d \n",count);
    int result = stringSize(firstName);
    printf("The number of elements in the string is:%d\n", result);
    printf("\n");

    printf("This is done by print_string function\n");
    print_string(firstName);
    printf("END OF THE PROGRAM\n");
    return 0;
}
int stringSize(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count- 1;
}
void print_string(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
