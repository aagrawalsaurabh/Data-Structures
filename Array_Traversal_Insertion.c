#include <stdio.h>

int main()
{
    int arr[50], size, num, pos;
    printf("Enter the size: ");
    scanf("%d", &size);
    if (size >= 50)
    {
        printf("Array Overflow you cannot insert");
    }
    else
    {
        printf("Enter the elements: ");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\nEnter the number to be inserted: ");
    scanf("%d", &num);
    printf("Enter the position at which number is to be inserted: ");
    scanf("%d", &pos);
    for (int i = size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = num;
    size+=1;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}