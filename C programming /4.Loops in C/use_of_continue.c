#include<stdio.h>
int main()
{
    for(int i=1;i<=10; i++)
    {
        if(i==6)
        {
            continue;  //continue is used to skip a single output
        }
        printf("%d\n",i);
    }
}