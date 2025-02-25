#include<stdio.h>
int printMax(int array[],int n);
int main()
{
    int n;
    int array[n]; 
    int max;
    printf("How many numbers to be used in array\n");
    scanf("%d",&n);
    printf("Enter %d numbers in the array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    max = printMax(array,n);
    printf("The largest number in the array is %d\n",max);
    return 0;
}
int printMax(int array[],int n)
{
    int max =0;
    for(int i=0 ; i < n ; i++)
    //This loop is to check all values in the array;
    {
        if(array[i]>max)
        //in this if else the bigger number is getting saved in max and then 
        //checking if the number is the biggest or not , if another bigger 
        //number is found that is getting saved in the max variable;
        {
            max = array[i];
        }
    }
    return max;
}