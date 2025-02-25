//Find the factorial of a natural number using different loops;
#include<stdio.h>
int main()
{
    int i,fact=1,a;
    printf("Enter a natural number\n");
    scanf("%d",&a);


// using for loop 
for(int i=1;i<=a;i++){
    fact*=i;
}

//using while loop 
    while(i<=a){
        fact *=i;
        i++;
    }
    printf("The factorial of %d is %d\n",a,fact);
    return 0;
}
