#include <stdio.h>
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
int partition(int a[], int low, int high)
{

    int pivot = a[low];
    int i = low;
    int j = high;
    int swap;

    while (i < j)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap = a[i];
            a[i] = a[j];
            a[j] = swap;
        }
    }
    swap = a[low];
    a[low] = a[j];
    a[j] = swap;
    return j;
}
void quickSort(int a[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quickSort(a, low, (partitionIndex - 1));  // Sorting left sub array
        quickSort(a, (partitionIndex + 1), high); // sorting the right sub array
    }
}
int main()
{
    int arr[] = {7, 12, 3, 4, 1};
    int size = 5;
    printArray(arr, size);
    quickSort(arr, 0, (size - 1));
    printArray(arr, size);
}