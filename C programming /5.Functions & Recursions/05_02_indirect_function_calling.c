#include<stdio.h>
void firstfunction();
void secondfunction();
void thirdfunction();

int main()
{
    firstfunction();// here we are calling the first function using the main function
}

void firstfunction(){
    printf("1.This is the First Function \n");
    secondfunction();
    // here we are calling the second function indirectly usint the first function
    thirdfunction();
    // and we can call nth functions usint just one function
}

void secondfunction(){
    printf("2.This is the Second Function and is called indirectly using the 1st function \n");
    thirdfunction();
}

void thirdfunction(){
    printf("3.This is the Third Function and is called indirectly using the 2nd function \n");
}

