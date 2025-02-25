#include <stdio.h>
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
void selectionSorting(int A[], int n)
{
    int minIndex = 0, temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[minIndex])
            {
                minIndex = j;
            }
        }
        temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
    }
}
int main()
{
    int A[] = {19, 14, 67, 5, 3};
    int n = 5;
    printArray(A, n);
    selectionSorting(A, n);
    printArray(A, n);
    return 0;
}