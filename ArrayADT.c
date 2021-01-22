#include <stdio.h>
#include <stdlib.h>

struct MyArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct MyArray *a, int tSize, int uSize)
{
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int*)malloc(tSize*sizeof(int));

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void setVal(struct MyArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter Element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void show(struct MyArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

int main()
{
    struct MyArray marks;
    createArray(&marks, 10, 2);
    printf("We are running setVal now\n");
    setVal(&marks);
    printf("We are running show now\n");
    show(&marks);
    return 0;
}