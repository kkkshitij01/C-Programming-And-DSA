// Write a program using fucntion to calculate the average of 3 numbers?
#include<stdio.h>
int average(int a , int b , int c);

int main()
{
    int x;
    x = average(15,10,5);
    printf("The Value of x is %d\n",x);
}

int average(int a , int b , int c){
    int result;
result = (a + b + c) / 3;
return result;
}


//Write a program using fucntion to calculate the average of 3 numbers?
// #include<stdio.h>
// int average(int a , int b , int c);

// int main()
// {
//     int x,a,b,c;
//     // printf("Enter the first number\n");
//     // scanf("%d",&a);
//     // printf("Enter the Second number\n");
//     // scanf("%d",&b);
//     // printf("Enter the Third number\n");
//     // scanf("%d",&c);
//     x = average(25,35,45);
//     printf("The Value of x is %d\n",x);
// }

// int average(int a , int b , int c){
//     int result;
// result = (a + b + c) / 3;
// return result;
// }
