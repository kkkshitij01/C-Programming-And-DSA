#include <stdio.h>
int sum()
{
    static int b = 23;
    b++;
    return b;
}
int main()
{
    int result = sum();
    printf("%d\n", result);

    int another = sum();
    printf("%d\n", another);
    another = sum();
    printf("%d\n", another);
    another = sum();
    printf("%d\n", another);
    another = sum();
    printf("%d\n", another);
}