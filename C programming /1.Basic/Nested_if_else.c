#include<stdio.h>
int main()
{
    int numb;
    printf("Enter a number \n");
    scanf("%d",&numb);
    
    if(numb >=0 )
    {
        printf("Positive\n");

        if( numb % 2 == 0 ){
            printf("Even\n");
        } else {         
            printf("odd\n");
        }

    }else{ printf("Negative\n"); 
    }
}