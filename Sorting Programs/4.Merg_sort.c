#include <stdio.h>
// This function merge the array in the sorted formet
void merge(int a[], int low, int mid, int high)
{
    int b[100];
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        b[k++] = a[i++];
    }
    while (j <= high)
    {
        b[k++] = a[j++];
    }
    for (int i = 0; i <= high; i++)
    {
        a[i] = b[i];
    }
}
// This function divides the array in 2 half
void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {

        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {12, 34, 7, 89, 4, 5};
    int size = 6;
    printArray(arr, size);
    mergeSort(arr, 0, (size - 1));
    printArray(arr, size);
    return 0;
}