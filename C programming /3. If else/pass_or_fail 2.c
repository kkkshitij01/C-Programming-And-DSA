#include <stdio.h>
int main()
{
    int physics, chemistry , maths;
    float total;
    
    printf("Enter the marks of Physics\n");
    scanf("%d",&physics);

    printf("Enter the marks of Chemistry\n");
    scanf("%d",&chemistry);

    printf("Enter the marks of Maths\n");
    scanf("%d",&maths);

    total = (physics + chemistry + maths)/3;
    if( total>= 40 && physics>=33 && chemistry>= 33  &&  maths>= 33){
        printf("Your total is %f and Your are pass\n",total);
    }
    else
    printf("Your are fail\n");


}