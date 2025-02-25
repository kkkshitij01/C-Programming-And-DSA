#include<stdio.h>
int main()
{
    int numb,i=0;
    do{
    printf("Enter a number:");
    scanf("%d",&numb);
    i++;
    if(numb % 7 == 0){
        break;
    }
    else{
        printf("Wrong number @ Try Again\n");
        printf("\n");
    }
    }while(1);
    printf("You took %d turns. \n",i);
    printf("\nEND OF THE PROGRAM\n");

}