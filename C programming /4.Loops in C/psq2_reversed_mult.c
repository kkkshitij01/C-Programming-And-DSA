 // write a progarm to print a reversed multiplication table using different types of loop
#include<stdio.h>

    int main(){
        int a,i;
        printf("\n");
        printf("Enter a natuaral number\n");
        scanf("%d",&a);
        printf("The reversed multiplication table of %d is \n",a);
        // now using for loop;
        for(int i=10;i;i--)
        {
            printf("%d\n",a*i);
        }



        // using while loop;
        // while(i){
        //     printf("%d\n",a*i);
        //     i--;
        // }


        // using do while loop;
        //  do{
        //     printf("%d\n",a*i);
        //     i--;
        //     }
        //     while(i);
        

return 0;
}