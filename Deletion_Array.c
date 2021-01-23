#include <stdio.h>

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, pos = 2;
    for (int i = pos - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size -= 1;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}