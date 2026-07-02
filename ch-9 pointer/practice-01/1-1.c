#include <stdio.h>

int main()
{
    int size;

    printf("Enter array size : ");
    scanf("%d" ,&size);

    int a[size];

    int *ptr[size];

    printf("\n\narray input\n\n");
    for(int i = 0; i < size; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d" ,&a[i]);
    }

    for(int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
    }

    int square [size];

    for(int i = 0; i < size; i++)
    {
        square[i] = (*ptr[i])* (*ptr[i]);
    }

    printf("\n\narray output\n\n");
    printf("square of each elements : \n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", square[i]);
    }

}
