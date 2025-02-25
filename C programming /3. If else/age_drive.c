#include<stdint.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);

    if(age>=18 && age<=80){
        printf("You can drive\n");
    }
    else{
        printf("You can't drive\n");
    }
    return 0;
}