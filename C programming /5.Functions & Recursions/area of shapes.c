#include<stdio.h>
void square(int side);
void rectangle(int length , int breadth);
void circleArea(float radius);
int main()
{
    int side,length,breadth;
    float radius;
    char shape;
    printf("Enter s of Square or r for rectangle or c for circle\n");
    scanf("%c",&shape);
    if( shape == 's')
    {
        printf("Enter the side of the Square\n");
        scanf("%d",&side);
        square(side);
    }
    else if(shape == 'r')
    {
        printf("Enter the length of the rectangle \n");
        scanf("%d",&length);
        printf("Enter the breadth of the rectangle \n");
        scanf("%d",&breadth);
        rectangle(length,breadth);
    }
    else if( shape  == 'c')
    {
        printf("Enter the Radius of the circle \n");
        scanf("%f",&radius);
        circleArea(radius);
    }
}
void square(int side)
{
    printf("The are of the square is %d\n",side*side);
}
void rectangle(int length , int breadth)
{
    printf("The are of the square is %d\n",length*breadth);
}
void circleArea(float radius)
{
    printf("The are of the square is %f\n",(radius*radius)* 3.14 );
}
