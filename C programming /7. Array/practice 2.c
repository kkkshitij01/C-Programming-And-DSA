//Find how many times a number x occers in an array.
#include<stdio.h>
int main()
{
    int numb,count = 0;
    int arr[10];
    printf("Enter any 10 numbers \n");
    for(int i=0;i<+10 ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number\n");
    scanf("%d",&numb);\
    for(int i=0 ; i <10 ; i++ )
    {
        if(numb == arr[i])
        {
            count++;
        }
    }
    printf("%d times \n",count);
    return 0;
}