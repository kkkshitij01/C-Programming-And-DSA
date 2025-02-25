// Write a program to enter price of 3 item and print their final cost with GST;
#include<stdio.h>
int main()
{
    float price_, price[3] ;
    printf("Enter The Price of Items\n");
    for (int i=0 ; i<=2; i++)
    {
        scanf("%f",&price[i]);
    }
    printf("The price of First item is %f\n",(0.18* price[0])+price[0]);
    printf("The price of Second item is %f\n",(0.18* price[1])+price[1]);
    printf("The price of Third item is %f\n",(0.18* price[2])+price[2]);
    
    return 0;
}