#include <stdio.h>
void printTable(int arr[][10], int n, int m);
int main()
{
    int n;
    printf("Enter the number of table to store in : \n");
    scanf("%d", &n);
    int arr[n][10];
    printTable(arr, n, 10);
    return 0;
}
void printTable(int arr[][10], int n, int m)
{
    int numb;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d number to print the table off: \n", i + 1);
        scanf("%d", &numb);
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = numb * (j + 1);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}