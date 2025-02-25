#include<stdio.h>

    int main(){
    int a,b,c,d;
    printf("Enter Any foun Different numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("A is =%dis greater\n",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("B= %d is greater \n",b);
    }
    else if (c>b && c>a && c>d){
        printf("C is = %d is greater\n",c);
    }
    else{
        printf("D = %d is greater\n",d);
    }

return 0;
}