#include <stdio.h>
void binarySearching(int a[], int size, int key)
{
    int l = 0;
    int h = size - 1;
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;

        if (a[mid] == key)
        {
            printf("%d is found \n", key);
        }
        if (a[mid] >= key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}
int main()
{
    int arr[] = {12, 45, 67, 884, 6, 9};
    int size = 6;
    binarySearching(arr, size, 6);
    return 0;
}