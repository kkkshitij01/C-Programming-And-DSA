// Program to print nth Hello World using Recursion
#include<stdio.h>
void helloWorld(int numb);        //Function Decleration

int main()
{
    helloWorld(5);                //Function Calling and 5 value refers to the numb = 5
    
}
void helloWorld(int numb)         //Function Defination 
{
    if(numb <= 0){
        return;
    }
    printf("Hello World\n");                          
    //printf("The Value of numb is %d\n",numb); // This to see the Decreasing value of Numb 
    helloWorld(numb-1);         //Function calling itself again
    
}