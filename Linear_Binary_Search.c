#include <stdio.h>

int linearSearch(int arr[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int element, int size)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 5, 10, 15, 25, 75, 100};
    int size = sizeof(arr) / sizeof(int);
    int element = 10;
    // int searchIndex = linearSearch(arr, element, size);
    int searchIndex = binarySearch(arr, element, size);
    printf("The element %d is found at %d \n", element, searchIndex);
    return 0;
}