#include <stdio.h>
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
void bubbleSorting(int A[], int n)
{
    int sorted = 1;
    int temp;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                sorted = 0; // This is to check if the array is already sorted;
            }
        }
    }
    if (sorted) // If array is already sorted the program will return after first loop
    {
        printf("The array is already sorted \n");
        return;
    }
}
int main()
{
    // int A[] = {12, 1, 4, 88, 92, 0};
    int A[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    // printArray(A, n);
    bubbleSorting(A, n);
    printArray(A, n);
    return 0;
}