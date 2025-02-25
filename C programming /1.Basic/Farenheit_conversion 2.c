#include <stdio.h>
int main ()
{

    float  c , f ;
    printf("Enter the value of Celcius\n");
    scanf("%f",&c);

    f = (c * 9/5) + 32;

    printf("Farenheit = \n%f\n",f );


}