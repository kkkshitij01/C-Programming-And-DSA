#include<stdio.h>
void square(int side);
void rectangle(int length , int breadth);
// void circle(float r);
int main()
{
    square(5);
    rectangle(5,6);
    // circle(5);
}
void square(int side)
{
    printf("The area of the square is %d",side*side);
}
void rectange( int x , int y)
{
    printf("The area of the Rectange is %d",x*y);
}
// void cirlce(float r)
// {
//     printf("The area of the circle is %f",22/7*r*r);
// }