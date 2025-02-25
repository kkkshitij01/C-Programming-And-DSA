// Write a program to convert the celcius function to farenhite?
#include<stdio.h>

float temperature( int temp );
int main()
{
    float a;
    a = temperature(45);
    printf("The temperature in farenhite is %.2f\n",a);


}

float temperature( int temp){
    float result;
    result = ( temp * 9/5) + 32;
    return result;
}