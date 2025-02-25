#include <stdio.h>
int main()
{
    int marks[2][3] = {{91, 92, 93}, {94, 95, 96}}; 
                   //{{0,0  0,1  0,2} {1,0  1,1  1,2}} 
    // Syntax of 2d array:- array_name[m][n] = {{a00 , a01__},{b10 , b11___}}
    printf("%d\n",marks[0][0]);
    printf("%d\n",marks[0][1]);
    printf("%d\n",marks[0][2]);   // this is how we can print the array.

    printf("%d\n",marks[1][0]);
    printf("%d\n",marks[1][1]);
    printf("%d\n",marks[1][2]);

    return 0;
}