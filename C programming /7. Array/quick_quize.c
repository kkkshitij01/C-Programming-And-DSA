//Complete the program.
//To print a 2d array using a function.
#include <stdio.h>
void displayArray(int arr[][], int a, int b);
int main()
{
    int m;
    int n;
    int arr[m][n];
    printf("Enter the rows and column of the array\n");
    scanf("%d%d", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the Numbers in %d row %d number", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    displayArray(arr,m,n);
}
void displayArray(int arr[][], int m, int n)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}