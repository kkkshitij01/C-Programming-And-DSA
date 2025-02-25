//To find the odd in an array inputed by the user.
#include <stdio.h>
int countOdd(int odd[], int n);
int main()
{
    int odds[10];
    printf("Enter Any 10 numbes \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &odds[i]);
    }
    printf("The numbers of odds entered are: %d \n",countOdd(odds,10));
}
int countOdd(int odd[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if( odd[i]%2 != 0)//odd
        {
            count ++;
        }
    }
    return count;
}
