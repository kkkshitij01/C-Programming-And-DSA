// Write a program to calculate force of attraction on a body of mass exerted by the earth?
#include<stdio.h>

float force();

int main()
{
    // int m;
    // printf("Enter the value of mass in kgs\n");
    // scanf("%d",&m);
    force(15);
    printf("The force on the body in newton is %.2f\n",force());

}

float force( int mass ){
    float result;
    result = mass * 9.8;
    return result;
}

