// Find the area of the square using Function?
#include<stdio.h>

int  area (int a);
int main()
{
    int side;
    side = area(5);
    printf("The area of the square is %d\n",side);
    

    
}

int area(int a){
    int c;
    c = a * a;
    return c;
}